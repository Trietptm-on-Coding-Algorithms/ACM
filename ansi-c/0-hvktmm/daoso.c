#include <stdio.h>
#include <string.h>

int main()
{
	long int so,so1,so2,so3,so4,so5,so10,so20,so30,so40,so50,so60;
	printf("\nNhap vao mot so co 6 chu so : ");  scanf("%ld",&so);
	so1 = so;
	so2 = so1 % 100000;  //123456 % 100000  = 23456
	so3 = so2 % 10000;  //23456 % 10000 = 3456
	so4 = so3 % 1000;   //3456 % 1000 = 456
	so5 = so4 % 100;    //456 % 100 = 56
	so60 = so5 % 10;     //56 % 10 = 6
	so50 = so5 / 10;  //56 / 10 = 5
	so40 = so4 / 100; //456 / 100 = 4 
	so30 = so3 / 1000; //3456 / 1000 = 3
	so20 = so2 / 10000; //23456 / 10000 = 2
	so10 = so1 / 100000; //123456 / 100000 = 1
	printf("\n%ld",so);
    printf("\n%d%d%d%d%d%d",so60,so50,so40,so30,so20,so10);
	printf("\n");
	return (0);
}