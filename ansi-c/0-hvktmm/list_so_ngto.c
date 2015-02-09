/* Chuong trinh nhap vao mot so n.
Liet ke cac so nguyen to be hon n */
#include <stdio.h>
#include <math.h>
int main()
{
    long int n, i, j, flag, tong=0;
    printf("\nNhap vao mot so : ");  scanf("%ld",&n);
    if (n<2)
        printf("\nKhong ton tai !");
    else
        {
            for (i=2; i<n; i++)
            {
                flag = 0;
                for (j=2; j<=sqrt(i); j++)
                    if (i % j == 0)  flag = 1;
                if (flag==0)  { printf("%d   ",i); tong ++; }
            }
            printf("\nCo %d so nguyen to be hon %d.",tong,n);
        }
    return (0);

}
