#include <stdio.h>
main()
{
	int* p_a, * p_b;
	int a = 100, b = 200,w;
	p_a = &a;
	p_b = &b;
	printf("����ւ��O�Fa = %d\tb = %d\n", *p_a, *p_b);
	
	//����ւ�
	w = *p_a;
	*p_a = *p_b;
	*p_b = w;
	printf("����ւ���Fa = %d\tb = %d\n", *p_a, *p_b);
}