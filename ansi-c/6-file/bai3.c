#include <stdio.h>
#include <conio.h>
#define fn "SO_LIEU.C"
FILE *f;
int n,tong=0,m = 0; 

typedef struct
{
	char ten[20];
	int dg,sl,tt;
}solieu;
solieu mh[100];

int main()
{
	void write(int N);
	void read();
	void output();
	printf("\nNhap so luong mat hang : ");  scanf("%d",&n);
	write(n);
	read();
	output();
	return (0);
}

void write(int N)
{
	f = fopen(fn,"wb");
	for (int i=1; i<=N; i++)
	{
		fflush(stdin);
		printf("\nNhap du lieu mat hang thu %d : ",i);
		printf("\nTen hang : "); scanf("%[^\t\n]s",&mh[i].ten);
		printf("\nDon gia : ");  scanf("%d",&mh[i].dg);
		printf("\nSo luong : ");  scanf("%d",&mh[i].sl);
		mh[i].tt = mh[i].dg*mh[i].sl;
		
		fwrite(&mh[i],sizeof(solieu),1,f);
	}
	fclose(f);
}
void output()
{
	char *mnu[6]={" STT ","    Ten Hang    ","  Don gia  "," So luong "," Thanh tien ","Tong tien:"};
	printf("\n%+19s SO LIEU BAN HANG\n"," ");
	printf("\n%+5s %+16s %+11s %+10s %+12s",mnu[0],mnu[1],mnu[2],mnu[3],mnu[4]);
	for (int i=1; i<=m; i++)
	{
			printf("\n%3d   %-13.13s %11d %10d %12d",i,mh[i].ten,mh[i].dg,mh[i].sl,mh[i].tt);
			tong += mh[i].tt;
	}
	printf("\n%-35s %s %8d\n"," ",mnu[5],tong);
	getch();
}
void read()
{
	f = fopen(fn,"rb");
	while (!feof(f))
	{
		m++;
		fread(&mh[m],sizeof(solieu),1,f);	
	}
	fclose(f);
	m--;
}
