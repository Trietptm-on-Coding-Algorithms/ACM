/*Bai tap 1: Viet chuong trinh nhap vao 3 so duong a,b,c
Kiem tra xem co lap thanh 3 canh tam giac. Do la tam giac gi?
Vuong can, vuong, can, deu, ... */
#include <stdio.h>
int main()
{
	float a,b,c;
	printf("\nNhap vao 3 so duong a,b,c: "); scanf("%f %f %f",&a,&b,&c);
	if ((a+b>c) && (b+c>a) && (a+c>b))
	{
		printf("\nTam giac ");
		if (((a*a == b*b+c*c)&&(b == c))||((b*b == a*a + c*c)&&(a == c))||((c*c == b*b + a*a)&&(b == a)))
			printf("vuong can\n");
		else
			if ((a*a == b*b+c*c)||(b*b == a*a + c*c)||(c*c == b*b + a*a))
				printf("vuong\n");
			else
				if ((a==b) || (b==c) || (a==c))
					if ((a==b) && (b==c))
						printf("deu\n");
					else
						printf("can\n");
				else printf("thuong\n");
	}
	else printf("\nKhong phai tam giac !\n");
	return (0);
}
