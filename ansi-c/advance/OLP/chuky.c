/* Chu ky dai nhat */
#include <stdio.h>

long chuky(long n)
{
    long temp=1;
    while (n>1)
    {
        if (n%2==1) n=3*n+1;
        else n=n/2;
        temp++;
    }
    return(temp);
}

int main()
{
    FILE *f, *g;
    long max, m, a, b, i, j, temp1;
    f = fopen("chuky.inp.txt","r");
    g = fopen("chuky.out.txt","w");
    fscanf(f,"%ld",&m);
    fflush(stdin);
    for (i=0; i<m; i++)
    {
        fscanf(f,"%ld %ld",&a,&b);
        fflush(stdin);
        max=chuky(a);
        b+=1;
        for (j=a+1; j<b; j++)
        {
            temp1 = chuky(j);
            if (temp1>max) max=temp1;
        }
        fprintf(g,"%ld %ld %ld\n",a,b-1,max);
    }
    fclose(g);
    fclose(f);
    return(0);
}
