#include<stdio.h>
main()
{
	int sum = 0,no,i=0;
	while (1) {		//(1)�͐^��\��(�������[�v)
		printf("��������́F");
		scanf("%d", &no);
		if (no == -999)break;
		sum += no;
		i++;
	}
	printf("���v=%d\t����=%.2f", sum,(float)sum/i);
}