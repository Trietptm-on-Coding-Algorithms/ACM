/* Viet chuong tring e mu x theo cong thuc xap xi */
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    long int x, m=1;
    float a=1,s=1;
    printf("\nNhap vao x : ");  scanf("%d",&x);
    do
    {
        a *= (float)x/m;
        s += a;
        m++;
    }
    while (a>0.00001);
    printf("%f",s);
    getch();
    return (0);
}
