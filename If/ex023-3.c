#include<stdio.h>
main()
{
	int no1, no2, t;
	printf("演算子を入力");
	scanf("%d", &t);
	printf("2つの整数を入力");
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