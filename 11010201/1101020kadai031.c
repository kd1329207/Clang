//1101020kadai031.c

#include<stdio.h>

main() 
{
	float a, b;
	printf("2つの実数値＞");
	scanf("%f%f", &a, &b);
	printf("大きい方：");
	if (a < b) { printf("%f\n", b); }
	if (b < a) { printf("%f\n", a); }
}