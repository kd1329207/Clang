#include <stdio.h>
main()
{
	int no, i1=0,i2=0;
	printf("®”‚ğ“ü—ÍF");
	scanf("%d", &no);
	do {
		i1++;
		do {
			printf(" ");
			i2++;
		} while (i2 <= no - i1);
		i2 = 0;
		do {
			printf("*");
			i2++;
		} while (i2 < i1);
		i2 = 0;
		printf("\n");
	} while (i1 < no);
}