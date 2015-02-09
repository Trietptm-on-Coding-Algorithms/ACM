#include <stdio.h>

int main()
{
	long int a,b,temp;
	printf("\nNhap 2 so a, b : ");  scanf("%ld %ld",&a,&b);
	printf("\nGia tri ban dau: a = %ld, b = %ld.",a,b);
	/*----Cach1-------*/
	temp = a; a = b; b = temp;
	/*----EndCach1----*/
	/*----Cach2-------*/
	a = a + b;
	b = a - b;
	a = a - b;
	/*----EndCach2----*/
	printf("\nHai so sau do: a = %ld, b = %ld.\n",a,b);
	return (0);
}