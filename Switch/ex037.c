#include <stdio.h>
main()
{
	char c;
	printf("���Z�q����́F");
	scanf("%c", &c);
	switch (c) {
		case '+':printf("���Z"); break;
		case '-':printf("���Z"); break;
		case '*':printf("��Z"); break;
		case '/':printf("���Z"); break;
		case '%':printf("���܂�"); break;
		default:printf("���̑�");
	}
}