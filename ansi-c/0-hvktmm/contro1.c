/* Nhap mot day n phan tu, sau do sap xep lai theo thu tu tang dan.
Bo sung phan tu x. Chen x vao day sao cho van dam bao tang dan */
#include <stdio.h>
#include <conio.h>
#include <malloc.h>
int main()
{
    int *p, temp, x, i, j, n;
    printf("\nNhap vao so luong phan tu : ");  scanf("%d",&n);
    p = (int *) malloc (n*sizeof(int));
    for (i=0; i<n; i++)
    {
        printf("\nA[%d] = ",i+1);
        scanf("%d",p+i);
    }
    printf("\nMANG BAN DAU\n");
    for (i=0; i<n; i++)
        printf("%5d",*(p+i));
    for (i=0; i<n-1; i++)
        for (j=i+1; j<n; j++)
            if (*(p+i)>*(p+j))
            {
                temp = *(p+i);  *(p+i) = *(p+j);  *(p+j) = temp;
            }
    printf("\nMANG DA SAP XEP\n");
    for (i=0; i<n; i++)
        printf("%5d",*(p+i));
    p = (int *) realloc(p,(n+1)*sizeof(int));

    printf("\nNhap vao so x : ");  scanf("%d",&x);
    i = 0;
    while ((x >= *(p+i))&&(i<n))  i++;
    if (i<n)
    {
        for (j=n; j>i; j--)
            *(p+j)=*(p+j-1);
        *(p+i) = x;
    }
    else *(p+n)=x;
    printf("\nMANG SAU KHI CHEN X\n");
    for (i=0; i<n+1; i++)
        printf("%5d",*(p+i));
    getch();
    return (0);
}
