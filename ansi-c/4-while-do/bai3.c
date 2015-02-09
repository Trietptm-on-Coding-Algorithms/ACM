#include <stdio.h>
#include <conio.h>

main()
{
	float a,gdp,v;
	int nam=2000;
	printf("\nNhap GDP nam 2000 : ");  scanf("%f",&a);
	printf("\nNhap toc do tang truong binh quan : ");  scanf("%f",&v);
	printf("\nNam                                 GDP");
	gdp = a;
	while (gdp <= 2*a)
	{
		gdp += gdp*v;
		printf("\n%d                                %.2f",nam,gdp);
		nam += 1;
	}
	getch();
}