#include <stdio.h>
void link(char* p, char* q);


main()
{
	char a[512], b[256];
	printf("�z��a��");
	scanf("%s", &a);
	printf("�z��b��");
	scanf("%s", &b);
	link(a, b);
	printf("�z��a = %s", a);
}


void link(char *p, char *q)
{
	while (*p) {
		p++;
	}
	while (*q) {
		*p = *q;
		p++;
		q++;
	}
	*p = '\0';
}
