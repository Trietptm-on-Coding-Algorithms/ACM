/* Tim so luong hinh vuong */
#include <stdio.h>

int check(int a[][100], int dong, int cot, int kt)
{
    int i, j, i0, j0, flag, temp=0;
    for (i=0; i<dong; i++)
        for (j=0; j<cot; j++)
        {
            flag=1;
            for (i0=i; i0<=i+kt-1; i0++)
                for (j0=j; j0<=j+kt-1; j0++)
                    if (a[i0][j0]!=1)
                    {
                        flag=0;
                        break;
                    }
            if (flag==1) temp++;
        }
    return(temp);
}

int main()
{
    FILE *f, *g;
	int n, k, i, j, dong, cot, kt, a[100][100];
	f = fopen("hv.inp.txt","r");
	g = fopen("hv.out.txt","w");
    fscanf(f,"%d",&n);
    for (k=0; k<n; k++)
    {
        fscanf(f,"%d %d %d",&dong,&cot,&kt);
        for (i=0; i<dong; i++)
            for (j=0; j<cot; j++)
                fscanf(f,"%d",&a[i][j]);
		fflush(stdin);
        fprintf(g,"%d\n",check(a,dong,cot,kt));
    }
    fclose(f);
	fclose(g);
    return(0);
}
