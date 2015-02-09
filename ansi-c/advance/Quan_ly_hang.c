/* Chuong trinh quan ly hang gom:
ngay, luong nhap, luong xuat va hang ton kho */
/* Su dung: Con tro */
#include <stdio.h>

typedef struct {
	char *tenhang;
	char *ngay;
	int luongnhap, luongxuat, hangtonkho;
} kieuhang;
kieuhang hang[100],*p;
int main()
{
	int n,i;
	printf("\nNhap so luong hang : ");  scanf("%d",&n);
	p = (kieuhang *) malloc (100* sizeof(kieuhang));
	for (i=0;i<n;i++)
	{
		printf("\nThong tin mat hang thu %d : ",i+1);
		fflush(stdin);
		printf("\nNhap ten hang : "); scanf("%[^\t\n]s",(p+i)->tenhang);
		fflush(stdin);
		printf("\nNhap ngay : ");  scanf("%[^\t\n]s",(p+i)->ngay);
		fflush(stdin);
		printf("\nNhap luong nhap, luong xuat, hang ton kho : "); 
	/*	scanf("%d %d %d",(p+i)->luongnhap,(p+i)->luongxuat,(p+i)->hangtonkho); */
	}
	printf("\nProcessing ... Enter to continue !\n");
	getch();
	printf("\nThong ke ban hang :");
	for (i=0;i<n;i++)
	{
		printf("\nThong tin mat hang thu %d : ",i+1);
		printf("\nTen hang : %s",*(p+i)->tenhang);
		printf("\nNgay : %s",*(p+i)->ngay);
	/*	printf("\nLuong nhap : %d",(p+i)->luongnhap);
	//	printf("\nLuong xuat : %d",(p+i)->luongxuat);
	//	printf("\nHang ton kho : %d",(p+i)->hangtonkho); */
	}
	free(p);
	getch();
	return(0);
}
