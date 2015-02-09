#include <stdio.h>
#include <conio.h>

void scanfArray(int **x, int m, int n, char ch);
void printfArray(int **x, int m, int n, char ch);
void sumArray(int **x, int **y, int m, int n);

int main()
{
    int **a, **b, m, n;
    printf("\nNhap vao kich thuoc ma tran : ");  scanf("%d %d",&m,&n);

    a = scanfArray(m,n,'A');
    b = scanfArray(m,n,'B');
    sumArray(a,b,m,n);
    return(0);
}

void scanfArray(int **x, int m, int n, char ch)
{
    int i, j, **x;
	for (i=0; i<n; i++)
        for (j=0; j<n; j++)
    {
    	printf("\n%c[%d,%d] = ",ch,i+1,j+1);
    	scanf("%d",&x[i][j]);
    }
}

void printfArray(int **x, int m, int n, char ch)
{
    int i, j;
    x = (int **) malloc (m*n*sizeof(int));
    printf("\n\nMANG %c\n\n",ch);
	for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
            printf("%d     ",x[i][j]);
    }
    getch();
}

void sumArray(int **x, int **y, int m, int n)
{
    int **z, i, j;
    z = (int **) malloc (m*n*sizeof(int));
	for (i=0; i<m; i++)
        for (j=0; j<n; j++)
           z[i][j] = x[i][j] + y[i][j];
    printfArray(z,m,n,'C');
}

