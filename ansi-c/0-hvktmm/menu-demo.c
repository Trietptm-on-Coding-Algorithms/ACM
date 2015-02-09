/* Chuong trinh tao mot menu lua chon voi 5 chuc nang
Nguoi dung chon mot chuc nang nao do thi hien thi
chuc nang tuong ung */
#include <stdio.h>
#include <conio.h>
int main()
{
    short int num=0;
    do
    {
        system("cls");
        printf("\n================================");
        printf("\n----1--Chuc nang 1");
        printf("\n----2--Chuc nang 2");
        printf("\n----3--Chuc nang 3");
        printf("\n----4--Chuc nang 4");
        printf("\n----5--Chuc nang 5");
        printf("\n----6--Thoat");
        printf("\n================================");
        printf("\nChon chuc nang: [1..6]? ");  scanf("%d",&num);
        switch (num)
        {
            case 1: printf("\nBan da chon chuc nang 1");  getch(); break;
            case 2: printf("\nBan da chon chuc nang 2");  getch(); break;
            case 3: printf("\nBan da chon chuc nang 3");  getch(); break;
            case 4: printf("\nBan da chon chuc nang 4");  getch(); break;
            case 5: printf("\nBan da chon chuc nang 5");  getch(); break;
        }
    }
    while (num<6);
    getch();
    return (0);
}
