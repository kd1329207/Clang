//1101020kadai035.c

#include<stdio.h>

main() 
{
	int a;
	printf("������");
	scanf("%d", &a);
	if (a == 0) {
		printf("0");
	}
	else {
		if (a < 0) {
			printf("�}�C�i�X");
		}
		if (0 < a) {
			printf("�v���X");
		}
	}
}