#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int no;
	srand(time(0));
	rand();
	rand();
	no = rand() % 100 + 1;
	if (50<=no) {
		printf("�� �m�[�}��");
	}
	if (20<=no&&no<=49) {
		printf("���� ���A");
	}
	if (6 <= no && no <= 19) {
		printf("������ SR");
	}
	if (2 <= no && no <= 5) {
		printf("�������� UR");
	}
	if (no == 1) {
		printf("���������� LR");
	}
}