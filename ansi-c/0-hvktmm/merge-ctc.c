#include <stdio.h>
#include <conio.h>

int *scanfArray(int n, char ch);
void printfArray(int x[], int n, char ch);
void mergeArray(int *x, int m, int *y, int n);

int main()
{
    int *a, *b, m, n;
    printf("\nNhap vao kich thuoc ma tran A: ");  scanf("%d",&m);
    a = scanfArray(m,'A');
    printf("\nNhap vao kich thuoc ma tran B: ");  scanf("%d",&n);
    b = scanfArray(n,'B');
    mergeArray(a,m,b,n);
    return(0);
}

int *scanfArray(int n, char ch)
{
    int i, *x;
    x = (int *) malloc (n*sizeof(int));
	for (i=0; i<n; i++)
    {
    	printf("\n%c[%d] = ",ch,i+1);
    	scanf("%d",x+i);
    }
    return x;
}

void printfArray(int *x, int n, char ch)
{
    int i;
    printf("\n\nMANG %c\n\n",ch);
	for (i=0; i<n; i++)
    	printf("%d     ",*(x+i));
    getch();
}

void mergeArray(int *x, int m, int *y, int n)
{
    int *z, i=0, j=0, t, k=0;
    z = (int *) malloc ((m+n)*sizeof(int));
	while (i<m && j<n)
	{
		if (*(x+i)<=*(y+j))  *(z+k++)=*(x+i++);
		else  *(z+k++)=*(y+j++);
	}
	if (i!=m)
		for (t=i; t<m; t++)
			*(z+k++)=*(x+t);
	else if (j!=n)
		for (t=j; t<n; t++)
			*(z+k++)=*(y+t);
    printfArray(z,m+n,'C');
    free(z);
}

