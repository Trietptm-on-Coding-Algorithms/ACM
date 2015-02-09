#include <stdio.h>
#include <conio.h>

void input(int x[100][100], int m, int n, char ch);
void output(int x[100][100], int m, int n, char ch);
void tich(int x[100][100], int y[100][100], int m, int n, int p);

int main()
{
    int a[100][100],b[100][100],c[100][100];
    int m,n,p;
    printf("\nNhap vao 3 so m,n,p : ");  scanf("%d %d %d",&m,&n,&p);
    input(a,m,n,'A');
    output(a,m,n,'A');
    input(b,n,p,'B');
    output(b,n,p,'B');
    //tich(a,b,m,n,p);
    return (0);
}

void input(int x[100][100], int m, int n, char ch)
{
    int i,j;
    printf("\nNhap ma tran %c : ",ch);
    for ( i=0; i<m; i++)
        for ( j=0;  j<n; j++)
        {
            printf("\n%c[%d,%d] = ",ch,i+1,j+1);
            scanf("%d",&x[i][j]);
        }
}

void output(int x[100][100], int m, int n, char ch)
{
    FILE *f;
    int i,j;
    f = fopen("DATA.TXT","a+t");
    fprintf(f,"MA TRAN %c",ch);
    fprintf(f,"\n%d %d\n",m,n);
    for ( i=0; i<m; i++)
    {
        for ( j=0;  j<n; j++)
            fprintf(f,"%d   ",x[i][j]);
        fprintf(f,"\n");
    }
    fprintf(f,"\n");
    fclose(f);
}

void tich(int x[100][100], int y[100][100], int m, int n, int p)
{
    int i,j,k, z[100][100];
    for (i=0; i<m; i++)
        for (j=0;  j<p; j++)
				for (k=0; k<n; k++)
                	z[i][j] += x[i][k]*y[k][j];
    output(z,m,p,'C');
}
