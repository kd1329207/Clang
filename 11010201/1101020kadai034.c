//1101020kadai034.c

#include<stdio.h>

main() 
{
	char a;
	printf("�A���t�@�x�b�g��");
	scanf("%c", &a);
	if ('a' <= a && a <= 'z') { printf("������"); }
	else {
		if ('A' <= a && a <= 'Z') { printf("�啶��"); }
		else printf("�G���[");
	}
	
}