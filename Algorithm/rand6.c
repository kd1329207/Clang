#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int no1, no2;
	printf("�����o���܂����H\n(1�F�O�[�@2�F�`���L�@3�F�p�[)��");
	scanf("%d", &no1);
	srand(time(0));
	rand();
	rand();
	no2 = rand() % 3;

	if (no1 == 1) {
		printf("�v���C���[�̓O�[�ł�\n");
		switch (no2) {
		case 0:printf("�R���s���[�^�̓O�[�ł�\n\n������"); break;
		case 1:printf("�R���s���[�^�̓`���L�ł�\n\n����"); break;
		case 2:printf("�R���s���[�^�̓p�[�ł�\n\n����"); break;
		}
	}
	if (no1 == 2) {
		printf("�v���C���[�̓`���L�ł�\n");
		switch (no2) {
		case 0:printf("�R���s���[�^�̓O�[�ł�\n\n����"); break;
		case 1:printf("�R���s���[�^�̓`���L�ł�\n\n������"); break;
		case 2:printf("�R���s���[�^�̓p�[�ł�\n\n����"); break;
		}
	}
	if (no1==3){
		printf("�v���C���[�̓p�[�ł�\n");
		switch (no2) {
		case 0:printf("�R���s���[�^�̓O�[�ł�\n\n����"); break;
		case 1:printf("�R���s���[�^�̓`���L�ł�\n\n����"); break;
		case 2:printf("�R���s���[�^�̓p�[�ł�\n\n������"); break;
		}
	}
}