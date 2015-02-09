/* Chuong trinh nhap vao thang va nam
Hien thi so ngay cua thang do. */
#include <stdio.h>
#include <conio.h>
int main()
{
    unsigned int m,y;
    printf("\nNhap vao thang, nam : ");  scanf("%d %d",&m,&y);
    switch (m)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: printf("\nThang %d co %d ngay.",m,31);  break;
        case 4:
        case 6:
        case 9:
        case 11: printf("\nThang %d co %d ngay.",m,30);  break;
        case 2: if ((y%400==0)||((y%4==0)&&(y%100!=0)))
                    printf("Thang %d co %d ngay.",m,29);
                else printf("Thang %d co %d ngay.",m,28);
                break;
        default: printf("\nDu lieu khong hop le !");  break;
    }
    getch();
    return (0);
}
