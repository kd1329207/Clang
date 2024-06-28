#include <stdio.h>
main()
{
	int gokei=0, ia;
	printf("”‚ğ‚¢‚ê‚Ä");
	scanf("%d", &ia);
	while (ia != -999) {
		gokei += ia;	//gokei = gokei + ia ‚Æ“¯‹`
		printf("”‚ğ‚¢‚ê‚Ä");
		scanf("%d",& ia);
	}
	printf("‡Œv=%d", gokei);
}