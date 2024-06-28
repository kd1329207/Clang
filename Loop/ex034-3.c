#include <stdio.h>
main()
{
	int i1=0, i2, i3=0;
	printf("®”‚ğ“ü—ÍF");
	scanf("%d", & i2);
	do {
		i1++;
		i3 = 0;
		do {
			
			printf("*");
			i3++;
		} while (i3 < i1);
		printf("\n");
		

	} while (i1 < i2);
}