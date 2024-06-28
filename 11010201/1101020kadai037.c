//1101020kadai037.c

#include<stdio.h>

main() 
{
	int a;
	printf("®”(0`100)„");
	scanf("%d", &a);
	if (90<=a) { printf("5"); }
	if (80<=a&&a<90) { printf("4"); }
	if (50<=a&&a<80) { printf("3"); }
	if (30<=a&&a<50) { printf("2"); }
	if (a<30) { printf("1"); }
}