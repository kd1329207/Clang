#include <stdio.h>

struct shohin_data {
	char name[20];
	int tanka;
};

void display3(struct shohin_data* a);


main()
{
	struct shohin_data shohin = { "ƒPƒVƒSƒ€",50 };
	struct shohin_data* p;
	p = &shohin;
	display3(p);
	
}

void display3(struct shohin_data* a)
{
	printf("shohin.name = %s\tshohin.tanka = %d\n", a->name, a->tanka);
}