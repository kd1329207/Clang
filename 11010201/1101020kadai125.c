//1101020kadai125.c
#include<stdio.h>

main() {
	int data[10] = { 10,20,30,40,50,60,70,80,-999 };
	int* p = data, i;
	printf("�|�C���^���Œ�ŕ\��\n�z��data[] = ");
	for (i = 0; i < 10; i++) {
		printf("%d,", data[i]);
	}
	printf("\n�|�C���^���ړ����ĕ\��\n�z��data[] = ");
	for (i = 0; i < 10; p++, i++) {
		printf("%d,", *p);
	}
}