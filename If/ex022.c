#include <stdio.h>
main()
{
	int year;
	printf("西暦を入力：");
	scanf("%d", &year);
	if (1989 <= year)
	{
		printf("平成生まれ");
	}
	else{
		printf("平成以前");
	}
}