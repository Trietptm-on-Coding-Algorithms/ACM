#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
void inhs(float a[100], int n);

main()
{
	int i,x,n;
	float hs[100],p=0;
	printf("\nNhap X va n : ");  scanf("%d %d",&x,&n);
	for (i=n; i>=0; i--)
	{
		printf("\nHe so cua x^%d : ",i);  scanf("%f",&hs[i]);
	}
	hs[-1] = 0;
	printf("\nDa thuc : "); inhs(hs,n);
	printf("\nGia tri X : %d",x);
	p = hs[0];
	for (i=n; i>0; i--)
		p += hs[i]*pow(x,i);
	printf("\nGia tri da thuc : %.0f",p);
	getch();
}

void inhs(float a[100], int n) 
{
	for (int i=n; i>=0; i--)
		if (a[i]!=0)
		 	if (i==n)  printf("%.0fx%d",a[i],i);
			else 
			if (i==1)
			{
				if (a[i]>0)  printf(" + %.0fx",fabs(a[i]));
				else 
				if (a[i]<0)  printf(" - %.0fx",fabs(a[i]));
			}
			else 
			if (i==0)
			{
				if (a[i]>0)  printf(" + %.0f",a[i]);
				else 
				if (a[i]<0)  printf(" - %.0f",fabs(a[i]));
			}
			else
			{
				if (a[i]>0)  printf(" + %.0fx%d",fabs(a[i]),i);
				else 
				if (a[i]<0)  printf(" - %.0fx%d",fabs(a[i]),i);
			}
}


