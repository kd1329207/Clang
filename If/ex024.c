#include<stdio.h>
main()
{
	char T;
	printf("文字を入力");
	scanf("%c", &T);

	if (65 <= T && T <= 90) {
		printf("大文字");
	}
	else {
		printf("大文字以外");
	}
}