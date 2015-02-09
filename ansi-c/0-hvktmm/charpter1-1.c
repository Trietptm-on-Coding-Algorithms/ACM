// Chuong trinh tinh x luy thua y
#include <stdio.h>
#include <math.h>

int main()
{
	long x,y,lt;
	printf("\nx = "); scanf("%ld",&x);
	printf("\ny = "); scanf("%ld",&y);
	printf("\n%ld luy thua %ld = %ld\n",x,y,(long) exp(y*log(x)));
	getch();
	return (0);
}
