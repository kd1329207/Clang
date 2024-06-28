#include <stdio.h>
#include <string.h>

typedef struct{
	char name[20];
	int tanka;
}商品データ;

main()
{
	商品データ shohin1, shohin2;
	strcpy(shohin1.name, "エンピツ");
	shohin1.tanka = 30;
	shohin2 = shohin1;
	printf("shohin1.name = %s\n", shohin1.name);
	printf("shohin1.tanka = %d\n", shohin1.tanka);
	printf("shohin2.name = %s\n", shohin2.name);
	printf("shohin2.tanka = %d\n", shohin2.tanka);
}