/* Chuong trinh tinh n! */
#include <stdio.h>
#include <conio.h>
int main()
{
    long int n, i, gt=1;
    printf("\nNhap vao mot so :(<17)?  ");  scanf("%ld",&n);
    for (i=1; i<=n; i++)
        gt *= i;
    printf("\n%d ! = %d",n,gt);
    getch();
    return (0);
}
