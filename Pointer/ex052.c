#include <stdio.h>
main()
{
	int* p_a, * p_b;
	int a = 100, b = 200,w;
	p_a = &a;
	p_b = &b;
	printf("入れ替え前：a = %d\tb = %d\n", *p_a, *p_b);
	
	//入れ替え
	w = *p_a;
	*p_a = *p_b;
	*p_b = w;
	printf("入れ替え後：a = %d\tb = %d\n", *p_a, *p_b);
}