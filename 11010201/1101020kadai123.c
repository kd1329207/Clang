//1101020kadai123.c

#include<stdio.h>
main() {
	double a, b, * p_a = &a, * p_b = &b;
	printf("�����l1��");
	scanf("%lf", &a);
	printf("�����l2��");
	scanf("%lf", &b);
	printf("�傫���� = ");
	if (*p_a < *p_b) { printf("%lf", *p_b); }
	if (*p_b < *p_a) { printf("%lf", *p_a); }
}