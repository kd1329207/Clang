//1101020kadai031.c

#include<stdio.h>

main() 
{
	float a, b;
	printf("2�̎����l��");
	scanf("%f%f", &a, &b);
	printf("�傫�����F");
	if (a < b) { printf("%f\n", b); }
	if (b < a) { printf("%f\n", a); }
}