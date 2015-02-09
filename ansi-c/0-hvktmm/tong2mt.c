/* Nhap 2 ma tran. Tinh tong 2 ma tran */
#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, m, n, a[100][100],b[100][100],c[100][100];
    printf("\nNhap kich thuoc ma tran m x n: ");  scanf("%d %d",&m,&n);
    for (i=0; i<m; i++)
        for (j=0; j<n; j++)
        {
            printf("A[%d,%d] = ",i+1,j+1);  scanf("%d",&a[i][j]);
        }
    for (i=0; i<m; i++)
        for (j=0; j<n; j++)
        {
            printf("B[%d,%d] = ",i+1,j+1);  scanf("%d",&b[i][j]);
        }
    for (i=0; i<m; i++)
        for (j=0; j<n; j++)
            c[i][j] = a[i][j] + b[i][j];
    printf("\nMA TRAN A\n\n");
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
            printf("%5d",a[i][j]);
        printf("\n");
    }
    printf("\nMA TRAN B\n\n");
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
            printf("%5d",b[i][j]);
        printf("\n");
    }
    printf("\nMA TRAN C\n\n");
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
            printf("%5d",c[i][j]);
        printf("\n");
    }
    getch();
    return (0);
}
