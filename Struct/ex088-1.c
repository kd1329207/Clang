#include <stdio.h>
#include <string.h>

struct shohin_data {
	char name[20];
	int tanka;
};


main()
{
	//�\���̕ϐ��̃����o�l�̏�����
	struct shohin_data shohin1, shohin2 = {"�{�[���y��",100};
	strcpy(shohin1.name, "�G���s�c");
	shohin1.tanka = 50;
	
	printf("shohin1.name = %s\n", shohin1.name);
	printf("shohin1.tanka = %d\n", shohin1.tanka);
	printf("shohin2.name = %s\n", shohin2.name);
	printf("shohin2.tanka = %d\n", shohin2.tanka);
}