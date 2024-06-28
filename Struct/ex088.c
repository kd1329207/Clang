#include <stdio.h>
#include <string.h>

struct shohin_data {
	char name[20];
	int tanka;
};

main()
{
	struct shohin_data shohin1, shohin2;
	strcpy(shohin1.name, "ƒGƒ“ƒsƒc");
	shohin1.tanka = 30;
	shohin2 = shohin1;
	printf("shohin1.name = %s\n", shohin1.name);
	printf("shohin1.tanka = %d\n", shohin1.tanka);
	printf("shohin2.name = %s\n", shohin2.name);
	printf("shohin2.tanka = %d\n", shohin2.tanka);
}