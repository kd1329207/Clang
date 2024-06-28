#include<stdio.h>
main()
{
	int no1, no2, t;
	printf("‰‰Zq‚ğ“ü—Í");
	scanf("%d", &t);
	printf("2‚Â‚Ì®”‚ğ“ü—Í");
	scanf("%d%d", &no1, &no2);
	if (t == 1) {
		printf("%d", no1 + no2);
	}
	else {
		if (t == 2) {
			printf("%d", no1 - no2);
		}
		else {
			if (t == 3) {
				printf("%d", no1 * no2);
			}
			else {
				if (t == 4) {
					printf("%d", no1 / no2);
				}
			}
		}
	}
}