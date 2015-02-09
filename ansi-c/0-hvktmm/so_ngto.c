/* Chuong trinh nhap vao mot so n.
Kiem tra xem n co la so nguyen to khong */
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    long int n, i;
    printf("\nNhap vao mot so : ");  scanf("%ld",&n);
    if (n<2)
        printf("\nN khong la so nguyen to !");
    else
        {for (i=2; i<=sqrt(n); i++)

            if (n % i == 0)
            {
                printf("\nN khong la so nguyen to !");
                getch();
                break;
            }
            if (i>sqrt(n)) printf("\nN la so nguyen to !");
        }
    getch();
    return (0);

}
