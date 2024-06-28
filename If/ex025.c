#include<stdio.h>
main()
{
	char T;
	printf("文字を入力");
	scanf("%c", &T);

	if (65 <= T && T <= 90 ||97<=T&&T<=122){
		printf("アルファベット");
	}
	else {
		if (48 <= T && T <= 57) {
			printf("数字");
		}
		else {
			printf("その他の文字");
		}
	}
}