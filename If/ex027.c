#include<stdio.h>
main()
{
	char T;
	printf("��������́F");
	scanf("%c", &T);
	if ('A' <= T && T <= 'Z') {
		printf("�ϊ�����ƁF%c", T + 32);
	}
	else {
		if ('a' <= T && T <= 'z') {
			printf("�ϊ�����ƁF%c", T - 32);
		}
		else {
			printf("�G���[");
		}
	}
		
}