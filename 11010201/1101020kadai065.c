//1101020kadai065.c

#include<stdio.h>
main() 
{
	int no=0, sum=0,i=0;

	do {
		sum += no;
		printf("����(-999�ŏI��)�H");
		scanf("%d", &no);
		i++;
	} while (no != -999);
	i--;
	printf("���v=%d\n����=%f", sum, (float)sum / i);
}