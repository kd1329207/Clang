//1101020kadai036.c

#include<stdio.h>

main() 
{
	int a,b;
	printf("����2��");
	scanf("%d%d", &a,&b);
	if (a < b) { printf("%d �� %d ��� %d ������", a, b, b - a); }
	if (b < a) { printf("%d �� %d ��� %d ������", b, a, a - b); }
	if (b == a) { printf("%d �� %d �͓�����", b, a); }
}