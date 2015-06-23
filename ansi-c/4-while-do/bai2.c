#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

long gt(int x);
float sinx(float x, float eps);

main()
{
	float a,b;
	printf("\nNhap vao so can tinh x : "); scanf("%f",&a);
	printf("\nNhap vao do chinh xac Eps : "); scanf("%f",&b);
	printf("\nDo chinh xac Eps, Sin(%.6f) = %.6f ", a, sinx(a,b));
	printf("\nChinh xac Sin(%f) = %.6f", a, sin(a));
	getch();
}

long gt(int x)
{
	long t=1;
	for (int i=1; i <= x; i++) t*=i;
	return t;
}

float sinx(float x, float eps)
{
	float a,s=0,t;
	int i=0;
	do 
	{
		i += 1;
		t = abs((float)(pow(x,2*i+1)/gt(2*i+1)));
		a = (float)(pow(-1,i)*pow(x,2*i+1))/gt(2*i+1);
		s += a;
	} while (t <= eps);
	return s;
}
