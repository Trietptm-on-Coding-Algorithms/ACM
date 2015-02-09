 /* Tinh e mu x */

#include<stdio.h>
#include<conio.h>
float Tinh(float c,float x)
{
  float x_mu=1,e=1;
  int n_gt=1,i=1;
while(x_mu/n_gt>c)
{
  e=e+x_mu/n_gt;
  i++;
  x_mu=x_mu*x;
  n_gt=n_gt*i;
}
return e;
}
void main()
{
float c,x;
printf("\nc=");
scanf("%f",&c);
printf("\nx=");
scanf("%f",&x);
printf("\ne mu %2.f=%6.2f",x,Tinh(c,x));
getch();
}
