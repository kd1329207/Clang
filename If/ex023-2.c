#include<stdio.h>
main()
{
	int y;
	printf("�������́F");
	scanf("%d", &y);
	if (y % 400 == 0||(y%4==0&&y%100!=0)) {
		printf("�[�N�ł�");
	}
	else {
		printf("�[�N�ł͂Ȃ�");
	}
}