#include <stdio.h>
main()
{
	char T;
	printf("小文字入力：");
	scanf("%c", &T);
	printf("入力文字：%c\t大文字に変換： %c", T, T-32);
}