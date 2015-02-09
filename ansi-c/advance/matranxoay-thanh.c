#include <stdio.h>
#include <conio.h>
void matranxoay();
void hienthi();
int a[100][100],d,c;	

main()
{
	printf("\nNhap vao d,c : ");  scanf("%d %d",&d,&c);
	matranxoay();
	hienthi();
	getch();
}

void matranxoay()
{
	int tren=0,trai=0,phai=c,duoi=d,dem=0,soluong=d*c;
	while (dem<soluong)
	{
		for (int i=trai;i<phai;i++)
		if (dem<soluong)
		a[tren][i]=++dem;
		tren++;
		for (int i=tren;i<duoi;i++)
		if (dem<soluong)
		a[i][phai-1]=++dem;
		phai--;
		for (int i=phai-1;i>=trai;i--)
		if (dem<soluong)
		a[duoi-1][i]=++dem;
		duoi--;
		for (int i=duoi-1;i>=tren;i--)
		if (dem<soluong)
		a[i][trai]=++dem;
		trai++;	
	 }
}
void hienthi()
{
	int i,j;
	for (i=0;i<d;i++)
	{
		for (j=0;j<c;j++)
		printf("%5d",a[i][j]);
		printf("\n");
	}
}
