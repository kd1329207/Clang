#include <stdio.h>


struct shohin_data {
	char name[20];
	int tanka;
	int kosuu;
};


main()
{
	struct shohin_data shohin[3] = { {"エンピツ",30,5},{"消しゴム",50,2 },{"フデバコ",500,3} };

	for (int i = 0; i < 3; i++) {
		printf("商品名：%s\n", shohin[i].name);
		printf("単　価：%d\n", shohin[i].tanka);
		printf("個　数：%d\n\n", shohin[i].kosuu);
	}
}