#include <stdio.h>
void link(char* p, char* q);


main()
{
	char a[512], b[256];
	printf("”z—ña„");
	scanf("%s", &a);
	printf("”z—ñb„");
	scanf("%s", &b);
	link(a, b);
	printf("”z—ña = %s", a);
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
