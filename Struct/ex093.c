#include <stdio.h>


struct shohin_data {
	char name[20];
	int tanka;
	int kosuu;
};


main()
{
	struct shohin_data shohin[3] = { {"�G���s�c",30,5},{"�����S��",50,2 },{"�t�f�o�R",500,3} };
	struct shohin_data* p;
	p = shohin;

	int i;
	for (i = 0; i < 3; i++,p++) {
		printf("���i���F%s\t", p->name);
		printf("�P�@���F%d\t", p->tanka);
		printf("�@���F%d\t", p->kosuu);
		printf("���@�z�F\\%4d\n",p->tanka*p->kosuu);
	}
}