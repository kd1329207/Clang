#include <stdio.h>
main()
{
	int i;
	printf("整数を入力：");
	scanf("%d", &i);
	do {
		printf("*****\n");
		i--;
	} while (1 <= i);
}