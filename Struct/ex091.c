#include <stdio.h>
#include <string.h>


struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};


main()
{
	struct profile no1,no2;
	struct profile* p;
	p = &no1;
	printf("ΌO");
	scanf("%s", &p->name);
	printf("ΆNϊ");
	scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);	//|C^pΜbirth[0] Μg(->)ΜAhX(&)
	printf("t^");
	scanf("%s", &p->blood);

	printf("%s@%dN %d %dϊΆ@t^:%s", p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);	//
}