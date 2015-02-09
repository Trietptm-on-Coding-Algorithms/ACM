#include <stdio.h>
#include <ctype.h>
#include <conio.h>

int n,tong=0; 
typedef struct 
{
	float m1,m2,m3;
} diem;
typedef struct
{
	char ten[20],que[20],ns[10],khoi;
	diem d;
	float td;
} ds;
ds ts[100];

int main()
{
	void input();
	void buble();
	void output();
	printf("\nNhap so luong thi sinh : ");  scanf("%d",&n);
	input();
	buble();
	output();
	return (0);
}

void input()
{
	int i=0;
	char ch='C',kh;
	do
	{
		i++;
		fflush(stdin);
		printf("\nNhap du lieu thi sinh thu %d : ",i); 		    fflush(stdin);
		printf("\nHo ten : "); scanf("%[^\t\n]s",&ts[i].ten); 	fflush(stdin);
		printf("\nQue quan : "); scanf("%[^\t\n]s",&ts[i].que); fflush(stdin);
		printf("\nNgay sinh : "); scanf("%[^\t\n]s",&ts[i].ns); fflush(stdin);
		printf("\nKhoi thi : ");  scanf("%c",&kh);		fflush(stdin);
		printf("\nNhap diem 3 mon thi : ");  scanf("%f %f %f",&ts[i].d.m1,&ts[i].d.m2,&ts[i].d.m3);
		ts[i].td = ts[i].d.m1 + ts[i].d.m2 + ts[i].d.m3;
		ts[i].khoi = toupper(kh);
		fflush(stdin);
		printf("\nNhap tiep ? [C/K] ");  scanf("%c",&ch);
	} while (toupper(ch)=='C');
}
void output()
{
	int stt=0,stt2=0;
	char *mnu[8]={" STT ","    Ho Ten    ","    Que    "," Ngay sinh "," Toan "," Ly "," Hoa "," Tong "};
	char *mnu2[8]={" STT ","    Ho Ten    ","    Que    "," Ngay sinh "," Van  "," Su "," Dia "," Tong "};
	printf("\n%+22s DANH SACH THI SINH KHOI A\n"," ");
	printf("\n%+5s %+16s %+15s %+10s %+6s %+6s %+6s %+6s",mnu[0],mnu[1],mnu[2],mnu[3],mnu[4],mnu[5],mnu[6],mnu[7],mnu[8]);
	for (int i=1; i<=n; i++)
		if (ts[i].khoi == 'A')
	{
			stt++;
			printf("\n%3d     %-18.13s %-12.11s %-10.10s %6.2f %6.2f %6.2f %6.2f",stt,ts[i].ten,ts[i].que,ts[i].ns,ts[i].d.m1,ts[i].d.m2,ts[i].d.m3,ts[i].td);		
	}
	printf("\n");
	printf("\n%+22s DANH SACH THI SINH KHOI C\n"," ");
	printf("\n%+5s %+16s %+15s %+10s %+6s %+6s %+6s %+6s",mnu2[0],mnu2[1],mnu2[2],mnu2[3],mnu2[4],mnu2[5],mnu2[6],mnu2[7],mnu2[8]);
	for (int i=1; i<=n; i++)
		if (ts[i].khoi == 'C')
	{
			stt2++;
			printf("\n%3d     %-18.13s %-12.11s %-10.10s %6.2f %6.2f %6.2f %6.2f",stt2,ts[i].ten,ts[i].que,ts[i].ns,ts[i].d.m1,ts[i].d.m2,ts[i].d.m3,ts[i].td);		
	}
	getch();
}
void buble()
{
	for (int i=1; i<=n-1; i++)
		for (int j=i+1; j<=n; j++)
			if (ts[i].td < ts[j].td)
				{
					ds temp = ts[i];
					ts[i] = ts[j];
					ts[j] = temp;
				}
}
