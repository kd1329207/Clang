#include<stdio.h>
main()
{
	char T;
	printf("���������");
	scanf("%c", &T);

	if (65 <= T && T <= 90 ||97<=T&&T<=122){
		printf("�A���t�@�x�b�g");
	}
	else {
		if (48 <= T && T <= 57) {
			printf("����");
		}
		else {
			printf("���̑��̕���");
		}
	}
}