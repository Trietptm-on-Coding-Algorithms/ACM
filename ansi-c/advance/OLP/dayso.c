/* Tim max cua tung day so trong tap cac day so */
#include <stdio.h>

int max(int arr[], int a, int b)
{
    int temp, k;
    temp = arr[a];
    for (k=a; k<b; k++)
        if (arr[k]>temp) temp=arr[k];
    return(temp);
}

int main()
{
    FILE *f, *g;
	int day[1000], m, n, i, j;
	f = fopen("dayso.inp.txt","r");
    g = fopen("dayso.out.txt","w");
    fscanf(f,"%d",&n);
    for (i=0; i<n; i++)
    {
        fscanf(f,"%d",&m);
        for (j=0; j<m; j++)
            fscanf(f,"%d",&day[j]);
        fprintf(g,"%d\n",max(day,0,m));
    }
    fclose(f);
    fclose(g);
    return(0);
}
