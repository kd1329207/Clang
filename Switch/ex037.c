#include <stdio.h>
main()
{
	char c;
	printf("‰‰Zq‚ğ“ü—ÍF");
	scanf("%c", &c);
	switch (c) {
		case '+':printf("‰ÁZ"); break;
		case '-':printf("Œ¸Z"); break;
		case '*':printf("æZ"); break;
		case '/':printf("œZ"); break;
		case '%':printf("‚ ‚Ü‚è"); break;
		default:printf("‚»‚Ì‘¼");
	}
}