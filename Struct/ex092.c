#include <stdio.h>


struct shohin_data {
	char name[20];
	int tanka;
	int kosuu;
};


main()
{
	struct shohin_data shohin[3] = { {"�G���s�c",30,5},{"�����S��",50,2 },{"�t�f�o�R",500,3} };

	for (int i = 0; i < 3; i++) {
		printf("���i���F%s\n", shohin[i].name);
		printf("�P�@���F%d\n", shohin[i].tanka);
		printf("�@���F%d\n\n", shohin[i].kosuu);
	}
}