// tinh chu vi & dien tich tam giac
#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, p, t;
	printf("\na = "); scanf("%f",&a);
	printf("\nb = "); scanf("%f",&b);
	printf("\nc = "); scanf("%f",&c);
	printf("\nchu vi = %f",p=a+b+c);
	t = (float) p/2;
	printf("\ndien tich = %f\n",sqrt(t*(t-a)*(t-b)*(t-c)));
	getch();
	return (0);
}
