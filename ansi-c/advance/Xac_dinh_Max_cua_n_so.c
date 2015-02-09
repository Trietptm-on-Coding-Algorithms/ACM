/* Xac dinh gia tri cuc dai (Max) cua n so
nhap tu ban phim */
/* Su dung: Con tro */
#include <stdio.h>
#include <malloc.h>

int main()
{
	int a[100], *p, n, i;
	printf("\nNhap n = ");  scanf("%d",&n);
	p = (int *) malloc (n*sizeof(int));
	*p = -32768;
	for (i=0;i<n;i++)
	{
		printf("\nNhap vao phan tu thu %d : ",i+1);
		scanf("%d",a+i);
		if (*(a+i) > *p)  p = a+i;
	}
	printf("\nGia tri cuc dai : %d\n",*p);
	free(p);
	return(0);
}
