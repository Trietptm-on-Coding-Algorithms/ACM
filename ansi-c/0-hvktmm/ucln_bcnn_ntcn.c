/* Nhap vao 2 so tu nhien va tim UCLN cua 2 so do.
Tim BCNN cua 2 so m, n
Kiem tra 2 so nguyen to cung nhau khong */
#include <stdio.h>
#include <conio.h>
int main()
{
    long int m, n, a, b;
    system("cls");
    printf("\nNhap vao 2 so tu nhien m, n : ");  scanf("%ld %ld",&m,&n);
    a = m; b = n;
    while (m != n)
        if (m>n) m -= n;
        else n -= m;
    printf("\nUCLN(%d,%d) = %d",a,b,m);
    printf("\nBCNN(%d,%d) = %d",a,b,(a*b)/m);
    if (m == 1) printf("\n%d, %d nguyen to cung nhau !\n",a,b);
    else printf("\n%d, %d khong nguyen to cung nhau !\n",a,b);
    getch();
    return (0);
}
