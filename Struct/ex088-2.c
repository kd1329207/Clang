#include <stdio.h>
#include <string.h>

struct shohin_data {
	char name[20];
	int tanka;
}shohin1, shohin2;		//構造体の宣言と同時に構造体変数を宣言

main()
{
	strcpy(shohin1.name, "エンピツ");
	shohin1.tanka = 45;
	shohin2 = shohin1;
	printf("shohin1.name = %s\n", shohin1.name);
	printf("shohin1.tanka = %d\n", shohin1.tanka);
	printf("shohin2.name = %s\n", shohin2.name);
	printf("shohin2.tanka = %d\n", shohin2.tanka);
}