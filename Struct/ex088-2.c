#include <stdio.h>
#include <string.h>

struct shohin_data {
	char name[20];
	int tanka;
}shohin1, shohin2;		//�\���̂̐錾�Ɠ����ɍ\���̕ϐ���錾

main()
{
	strcpy(shohin1.name, "�G���s�c");
	shohin1.tanka = 45;
	shohin2 = shohin1;
	printf("shohin1.name = %s\n", shohin1.name);
	printf("shohin1.tanka = %d\n", shohin1.tanka);
	printf("shohin2.name = %s\n", shohin2.name);
	printf("shohin2.tanka = %d\n", shohin2.tanka);
}