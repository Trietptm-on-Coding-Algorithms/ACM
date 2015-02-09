/* Tinh hieu do dai hai chuoi nhap vao 
tu ban phim (khong su dung function strlen)*/
/* Su dung: Con tro */
#include <string.h>
#include <stdlib.h>

int main()
{
	char *s1, *s2, ch;
	int n1,n2;
	/* Cap phat bo nho cho 2 points */
	s1 = (char *) malloc (100);
	s2 = (char *) malloc (100);
	printf("\nNhap vao chuoi thu nhat : ");  gets(s1);
	printf("\nNhap vao chuoi thu hai : ");  gets(s2);
	/* Ham strchr xac dinh vi tri xuat hien cua ch trong chuoi */
	ch = '\0'; /* Ky tu Null */
	n1 = strchr(s1,ch)-s1+1;
	n2 = strchr(s2,ch)-s2+1;
	/* Giai phong bo nho cho 2 points */
	free(s1);
	free(s2);
	printf("\nHieu do dai hai chuoi : %d\n",n1-n2);
	getch();
	return(0);
}
