#include <stdio.h>
main() {
	int a = 100, b;
	int *p_a;
	p_a = &a;
	b = *p_a;
	printf("a=%d\t&a=%d\np_a=%d\t*p_a=%d\t&p_a=%d", a, &a, p_a, *p_a, &p_a);
}