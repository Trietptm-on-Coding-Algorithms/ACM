/* Chuong trinh nhap vao mot so nguyen ung voi ngay trong tuan
(thu 2, 3, 4...).
Hien thi gia tri ngay tuong ung voi x.
x = 2: Hom nay la thu hai
...
x = 1: Hom nay la chu nhat */
#include <stdio.h>
#include <stdio.h>
int main()
{
    short int x;
    printf("\nNhap vao mot so nguyen : ");  scanf("%d",&x);
    switch (x)
    {
        case 1: printf("\nHom nay la Chu Nhat.");  break;
        case 2: printf("\nHom nay la Thu Hai.");  break;
        case 3: printf("\nHom nay la Thu Ba.");  break;
        case 4: printf("\nHom nay la Thu Tu.");  break;
        case 5: printf("\nHom nay la Thu Nam.");  break;
        case 6: printf("\nHom nay la Thu Sau.");  break;
        case 7: printf("\nHom nay la Thu Bay.");  break;
        default: printf("\nSo nguyen khong hop le !"); break;
    }
    getch();
    return (0);
}
