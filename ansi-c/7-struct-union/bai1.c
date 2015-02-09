#include <stdio.h>
#include <conio.h>

int n,tong=0; 
typedef struct
{
	char ten[20];
	int dg,sl,tt;
} solieu;
solieu mh[100];

int main()
{
	void input();
	void buble();
	void output();
	printf("\nNhap so luong mat hang : ");  scanf("%d",&n);
	input();
	buble();
	output();
	return (0);
}

void input()
{
	for (int i=1; i<=n; i++)
	{
		fflush(stdin);
		printf("\nNhap du lieu mat hang thu %d : ",i);
		printf("\nTen hang : "); scanf("%[^\t\n]s",&mh[i].ten);
		printf("\nDon gia : ");  scanf("%d",&mh[i].dg);
		printf("\nSo luong : ");  scanf("%d",&mh[i].sl);
		mh[i].tt = mh[i].dg*mh[i].sl;
	}
}
void output()
{
	char *mnu[6]={" STT ","    Ten Hang    ","  Don gia  "," So luong "," Thanh tien ","Tong tien:"};
	printf("\n%+19s SO LIEU BAN HANG\n"," ");
	printf("\n%+5s %+16s %+11s %+10s %+12s",mnu[0],mnu[1],mnu[2],mnu[3],mnu[4]);
	for (int i=1; i<=n; i++)
	{
			printf("\n%3d   %-13.13s %11d %10d %12d",i,mh[i].ten,mh[i].dg,mh[i].sl,mh[i].tt);
			tong += mh[i].tt;
	}
	printf("\n%-35s %s %8d\n"," ",mnu[5],tong);
	getch();
}
void buble()
{
	for (int i=1; i<=n-1; i++)
		for (int j=i+1; j<=n; j++)
			if (mh[i].ten[0] > mh[j].ten[0])
				{
					solieu temp = mh[i];
					mh[i] = mh[j];
					mh[j] = temp;
				}
}
