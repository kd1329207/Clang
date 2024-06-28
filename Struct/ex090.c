#include <stdio.h>

struct shohin_data {
	char name[20];
	int tanka;
};


main()
{
	struct shohin_data shohin;
	struct shohin_data* p;
	p = &shohin;
	printf("¤•i–¼„");
	scanf("%s", p->name);
	p->tanka = 30;
	printf("p->name = %s\n", p->name);
	printf("p->tanka = %d\n", p->tanka);
	printf("shohin.name = %s\n", shohin.name);
	printf("shohin.tanka = %d\n", shohin.tanka);
}