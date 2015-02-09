/* Chuyen tu so hex sang so nhi phan */
/* Su dung: Toan tu bitwise AND */
#include <stdio.h>

void main()
{
	int i, num, bit;
	unsigned int mask;
    char string[10], ch;
	do
	{
		mask = 0x8000;
		printf("\nNhap vao mot so : ");  scanf("%x",&num);
		printf("\nDang nhi phan cua %x la : ",num);
		for(i=0;i<16;i++)
		{
			bit = (mask & num)? 1 : 0;
			printf("%d",bit);
			if (i==7)
				printf(" ");
			mask >>= 1;
		}
		printf("\nTiep tuc khong ? [C/K]");
		ch = getch();
	} while (ch == 'c');
	getch();
}
