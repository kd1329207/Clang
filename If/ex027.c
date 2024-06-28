#include<stdio.h>
main()
{
	char T;
	printf("文字を入力：");
	scanf("%c", &T);
	if ('A' <= T && T <= 'Z') {
		printf("変換すると：%c", T + 32);
	}
	else {
		if ('a' <= T && T <= 'z') {
			printf("変換すると：%c", T - 32);
		}
		else {
			printf("エラー");
		}
	}
		
}