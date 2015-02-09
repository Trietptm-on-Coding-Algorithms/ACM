#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#define fn "DSACH.C"
FILE *f;
int i=0,n,tong=0,m=0,lan=0; 

typedef struct
{
	char ten[20];
	int t;
	float dtb;
}ds;
ds sv[100];

int main()
{
	void creat();
	void read();
	void output();
	void edit();
	int search(char ht[20]);
	int k=0;
	do
    {
    	printf("\nChuc nang : \n1-Hien thi file \n2-Tao danh sach \n3-Bo sung sinh vien \n4-Chinh sua sinh vien \n5-Exit \nYour choice ? [1..5] ");
    	scanf("%d",&k);
    	switch (k)
    	{
	    	case 1: read();  output();  getch(); break;
	    	case 2: lan=0; creat();  getch(); break;
	    	case 3: lan=1; creat();  getch(); break;
    		case 4: edit(); break;
	    	default: break;
	    }
	    
    } while (k<5);
	return (0);
}

void creat()
{
	char ch='C';
	if (lan>0) f = fopen(fn,"ab");
	else f = fopen(fn,"wb");
	do
	{
		i++;
		fflush(stdin);
		printf("\nNhap du lieu sinh vien thu %d : ",i);
		printf("\nHo ten : "); scanf("%[^\t\n]s",&sv[i].ten);
		printf("\nTuoi : ");  scanf("%d",&sv[i].t);
		printf("\nDiem TB : ");  scanf("%f",&sv[i].dtb);
		fflush(stdin);
		printf("\nNhap tiep ? [C/K] ");  scanf("%c",&ch);
		fwrite(&sv[i],sizeof(ds),1,f);
	} while (toupper(ch)=='C');
	fclose(f);
}
void output()
{
	char *mnu[4]={" STT ","    Ho ten    ","  Tuoi  "," DTB "};
	printf("\n%+12s DANH SACH SINH VIEN\n"," ");
	printf("\n%+5s %+16s %+11s %+10s",mnu[0],mnu[1],mnu[2],mnu[3]);
	for (int i=1; i<=m; i++)
			printf("\n%3d   %-20.20s %4d %13.2f",i,sv[i].ten,sv[i].t,sv[i].dtb);
	printf("\n\n");
	getch();
}
void read()
{
	f = fopen(fn,"rb");
	m=0;
	while (!feof(f))
	{
		m++;
		fflush(stdin);
		fread(&sv[m],sizeof(ds),1,f);	
	}
	m--;
	fclose(f);
}
void edit()
{
	int sbyte,j;
	ds temp;
	fflush(stdin);
	printf("\nNhap ten sinh vien can sua : ");  scanf("%[^\t\n]s",&temp.ten);
	if (search(temp.ten) != 0)
	{
		j = search(temp.ten);
		sbyte = (j-1)*sizeof(ds);
		fflush(stdin);
		printf("\nNhap du lieu can sua cho sinh vien %d : ",j);
		printf("\nTuoi : ");  scanf("%d",&temp.t);
		fflush(stdin);
		printf("\nDiem TB : ");  scanf("%f",&temp.dtb);
		f = fopen(fn,"r+b");
		fseek(f,sbyte,0);
		fwrite(&temp,sizeof(ds),1,f);
		fclose(f);
		printf("\nSuccess ! Press Enter...");
	}
	else printf("\nNot Found !\n");
	getch();
}
int search(char ht[20])
{
	read();
	int l,kk;
	fflush(stdin);
	for (l=1; l<=m; l++)
		if (strcmp(sv[l].ten,ht) == 0)
				{ 				
					kk = l;
					l--;
					break;
				}
	if (l>m) return (0); else return kk;
}
