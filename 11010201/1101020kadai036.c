//1101020kadai036.c

#include<stdio.h>

main() 
{
	int a,b;
	printf("整数2つ＞");
	scanf("%d%d", &a,&b);
	if (a < b) { printf("%d は %d より %d 小さい", a, b, b - a); }
	if (b < a) { printf("%d は %d より %d 小さい", b, a, a - b); }
	if (b == a) { printf("%d と %d は等しい", b, a); }
}