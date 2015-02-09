/* Tao 1 tep tin :
- Dong dau tien ghi chuoi "MA TRAN A"
- Dong thu 2 ghi so dong, so cot cua A
- Cac dong tiep theo ghi gia tri cac phtu
- Tuong tu cho ma tran B
- Doc tep tin vua tao de lay du lieu 2
ma tran A, B
- Sau do tinh tich 2 ma tran roi ghi
ket qua C = A + B vao cuoi tep tin */

#include <stdio.h>
#include <conio.h>

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

void writeArray(int **x, int m, int n, char ch)
{
    FILE *f;
    f = fopen("TONGMT.TXT","a+t");
    int i, j;
    x = (int **) malloc (m*n*sizeof(int**));
    fprintf(f,"\nMA TRAN %c \n",ch);
    fprintf(f,"\n%d %d",m,n);
	for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
            fprintf(f,"%d     ",x[i][j]);
        fprintf(f,"\n");
    }
    getch();
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
        printf("\n");
    }
    getch();
}
