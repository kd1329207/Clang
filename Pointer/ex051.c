#include <stdio.h>
main()
{
	int * p_a, * p_b;
	int a = 50, b = 10,c;
	p_a = &a, p_b = &b;
	c = *p_a + *p_b;
	printf("%d + %d = %d", a, b, c);
}