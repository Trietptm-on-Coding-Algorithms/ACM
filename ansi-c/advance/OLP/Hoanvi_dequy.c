/* Hoan vi 1 day so: su dung de quy */
#include <stdio.h>
#include <conio.h>

void hoanvi(int a[], int i);
int a1[]={1,2,3,4,5,6,7,8,9};
int n, c;

int main()
{
    system("cls");
    n = 9;
    c = 0;
    hoanvi(a1,0);
    printf("\n\nCo %d hoan vi.",c);
    getch();
    return(0);
}

void hoanvi(int a[], int i)
{
    int j, temp, k;
    for (j=i; j<=n; j++)
    {
        temp = a[i]; a[i]=a[j]; a[j] = temp;
        if (i == n-1)
        {
            c++;
            for (k=0; k<=n; k++)
                printf("%d  ",a[k]);
            printf("\n\n");
        }
        else
            hoanvi(a,i+1);
    }
}
