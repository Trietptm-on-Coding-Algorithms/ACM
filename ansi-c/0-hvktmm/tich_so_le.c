/* Chuong trinh tinh n!! */
#include <stdio.h>
#include <conio.h>
int main()
{
    long int n, i, gt=1;
    printf("\nNhap vao mot so :(n>0)?  ");  scanf("%ld",&n);
    for (i=n; i>0; i-=2)
        gt *= i;
    printf("\n%d !! = %d",n,gt);
    getch();
    return (0);
}
