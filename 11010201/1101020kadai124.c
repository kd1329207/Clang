//1101020kadai124.c

#include<stdio.h>
main() {
	char c, * p_c = &c;
	printf("�ꕶ�����́�");
	scanf("%c", &c);
	printf("���̕�����%c", *p_c + 1);
}