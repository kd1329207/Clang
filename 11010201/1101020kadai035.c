//1101020kadai035.c

#include<stdio.h>

main() 
{
	int a;
	printf("整数＞");
	scanf("%d", &a);
	if (a == 0) {
		printf("0");
	}
	else {
		if (a < 0) {
			printf("マイナス");
		}
		if (0 < a) {
			printf("プラス");
		}
	}
}