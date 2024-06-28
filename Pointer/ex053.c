#include <stdio.h>
main()
{
	int* p_a, * p_b,*p_w;
	int a = 100, b = 200,w;
	p_a = &a;
	p_b = &b;
	printf("入れ替え前：*p_a = %d\t*p_b = %d\n", *p_a, *p_b);
	
	//入れ替え
	p_w = p_a;
	p_a = p_b;
	p_b = p_w;
	printf("入れ替え前：*p_a = %d\t*p_b = %d\n", *p_a, *p_b);
}