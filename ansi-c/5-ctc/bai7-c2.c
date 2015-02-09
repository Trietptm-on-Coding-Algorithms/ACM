#include <stdio.h>
#include <conio.h>
long ucln(long x, long y);

main()
{
	long a,b;
	printf("\nNhap 2 so nguyen duong : ");  scanf("%ld %ld",&a,&b);
	printf("\nUCLN(%ld,%ld) = %ld\n",a,b,ucln(a,b));
    getch();
}

long ucln(long x, long y)
{
	return (x == 0) ? y : ucln(y%x,x);
}
