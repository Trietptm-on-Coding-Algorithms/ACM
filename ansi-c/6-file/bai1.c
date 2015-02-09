#include <stdio.h>
#include <math.h>
#define fn "CONG_MT.C"
FILE *f;
int a[100][100],b[100][100],c[100][100];
int n,m,i,j;
void init();
void input(int x[100][100], int p, int q);
void output(int x[100][100]);

int main()
{
    printf("\nNhap vao kich thuc n x m  : ");
    scanf("%d %d",&n,&m);
    printf("\nNhap A");
    input(a,n,m);
    printf("\nNhap B");
    input(b,n,m);
    for (i=0; i<n; i++)
        for (j=0;  j<m; j++)
        {
        	c[i][j]=a[i][j]+b[i][j];
        }
	init();
    return (0);
}

void init()
{
	f = fopen(fn,"w");
	if (f != NULL)
	{
		fprintf(f,"%d %d",n,m);
		output(a);
		output(b);
		output(c);
		fclose(f);
	}
}
void input(int x[100][100], int p, int q)
{
    for (int i=0; i<p; i++)
        for (int j=0;  j<q; j++)
        {
            printf("\n[%d,%d] = ",i,j);
            scanf("%d",&x[i][j]);
        }
}

void output(int x[100][100])
{
	fprintf(f,"\n");
    for (int i=0; i<n; i++)
    {
        fprintf(f,"\n");
        for (int j=0;  j<m; j++)
        {
            fprintf(f,"%d    ",x[i][j]);
        }
    }
}
