#include <stdio.h>
main()
{
	int* p_a, * p_b;
	int a = 100, b = 200,w;
	p_a = &a;
	p_b = &b;
	printf("“ü‚ê‘Ö‚¦‘OFa = %d\tb = %d\n", *p_a, *p_b);
	
	//“ü‚ê‘Ö‚¦
	w = *p_a;
	*p_a = *p_b;
	*p_b = w;
	printf("“ü‚ê‘Ö‚¦ŒãFa = %d\tb = %d\n", *p_a, *p_b);
}