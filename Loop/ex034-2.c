#include <stdio.h>
main()
{
	int i,i2=5;
	printf("整数を入力：");
	scanf("%d", &i);
	do {
		do {
			printf("*");
			i2--;
		} while (1 <= i2);
		printf("\n");
		i--;
		i2 = 5;
	} while (1 <= i);
}