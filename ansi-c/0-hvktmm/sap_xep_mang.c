/* Nhap mang n phan tu so nguyen va so nguyen x
Tim gia tri x co trong day khong.
Sap xep tang dan.
Chen x vao mang sao cho day van la tang dan.
TBC so duong, so am*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, n, x, a[100], temp, k=0, flag=0;
    printf("\nNhap vao n, x : ");  scanf("%d %d",&n,&x);
    for (i=0; i<n; i++)
    {
        printf("\nA[%d] = ",i+1);  scanf("%d",&a[i]);
        if (a[i]==x) flag=1;
    }
    if (flag==1) printf("\nGia tri %d ton tai trong day!\n",x);
    else printf("\nGia tri %d khong ton tai trong day!\n",x);
    for (i=0; i<=n; i++)
        for (j=i+1; j<n; j++)
            if (a[i]>a[j])
            {
                temp=a[i]; a[i]=a[j]; a[j]=temp;
            }
    printf("\n\nMANG SAU SAP XEP\n\n");
    for (i=0; i<n; i++)
        printf("%d   ",a[i]);
    getch();
    printf("\n\nMANG SAU KHI CHEN X\n\n");
    for (i=0; i<n; i++)
        if (a[i]<=x)
            printf("%d   ",a[i]);
    printf("%d   ",x);
    for (i=0; i<n; i++)
        if (a[i]>x)
            printf("%d   ",a[i]);
    getch();
    return (0);
}
