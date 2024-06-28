//1101020kadai034.c

#include<stdio.h>

main() 
{
	char a;
	printf("アルファベット＞");
	scanf("%c", &a);
	if ('a' <= a && a <= 'z') { printf("小文字"); }
	else {
		if ('A' <= a && a <= 'Z') { printf("大文字"); }
		else printf("エラー");
	}
	
}