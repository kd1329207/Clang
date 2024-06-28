#include <stdio.h>


struct shohin_data {
	char name[20];
	int tanka;
	int kosuu;
};


main()
{
	struct shohin_data shohin[3] = { {"エンピツ",30,5},{"消しゴム",50,2 },{"フデバコ",500,3} };
	struct shohin_data* p;
	p = shohin;

	int i;
	for (i = 0; i < 3; i++,p++) {
		printf("商品名：%s\t", p->name);
		printf("単　価：%d\t", p->tanka);
		printf("個　数：%d\t", p->kosuu);
		printf("金　額：\\%4d\n",p->tanka*p->kosuu);
	}
}