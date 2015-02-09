#include <stdio.h>
#include <math.h>
#define fn "TICH_MT.C"
FILE *f;
int a[100][100],b[100][100],c[100][100];
int n,m,p,i,j,k;
void init();
void input(int x[100][100], int p, int q);
void output(int x[100][100], int p, int q);

int main()
{
	init();
	for (i=0; i<n; i++)
		for (j=0;  j<p; j++)
			for (k=0; k<m; k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
	output(c,n,p);
    return (0);
}
void init()
{
	f = fopen(fn,"r");
	if (f != NULL)
	{
		fscanf(f,"%d %d %d",&n,&m,&p);
		input(a,n,m);
		input(b,m,p);
		fclose(f);
	}
}
void input(int x[100][100], int p, int q)
{
    for (int i=0; i<p; i++)
        for (int j=0;  j<q; j++)
        {
            fscanf(f,"%d",&x[i][j]);
        }
}

void output(int x[100][100], int p, int q)
{
	f = fopen(fn,"a");
	fprintf(f,"\n");
	for (int i=0; i<p; i++)
    {
        fprintf(f,"\n");
        for (int j=0;  j<q; j++)
        {
            fprintf(f,"%d   ",x[i][j]);
        }
    }
    fclose(f);	
	printf("\nOK\n");
}
