#include <stdio.h>
#include <conio.h>

void input();
void output(int x[100][100], int m, int n, char ch);
void tich(int x[100][100], int y[100][100], int m, int n, int p);

FILE *f;
int a[100][100],b[100][100];
int m,n,p,i,j,k;

int main()
{
    input();
    tich(a,b,m,n,p);
    return (0);
}

void input()
{
    char str[40];
    f = fopen("DATA.TXT","r+t");
    fscanf(f,"%[^\t\n]s",str);
    fscanf(f,"%d %d",&m,&n);
    for ( i=0; i<m; i++)
        for ( j=0;  j<n; j++)
            fscanf(f,"%d",&a[i][j]);
    fscanf(f,"\n");
    fscanf(f,"%[^\t\n]s",str);
    fscanf(f,"%d %d",&n,&p);
    for ( i=0; i<n; i++)
        for ( j=0;  j<p; j++)
            fscanf(f,"%d",&b[i][j]);
    fclose(f);
}

void output(int x[100][100], int m, int n, char ch)
{
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
    int k, z[100][100];
    for (i=0; i<m; i++)
        for (j=0;  j<p; j++)
				for (k=0; k<n; k++)
                	z[i][j] += x[i][k]*y[k][j];
    output(z,m,p,'C');
}
