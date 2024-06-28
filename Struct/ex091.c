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
	printf("名前＞");
	scanf("%s", &p->name);
	printf("生年月日＞");
	scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);	//ポインタpのbirth[0] の中身(->)のアドレス(&)
	printf("血液型＞");
	scanf("%s", &p->blood);

	printf("%s　%d年 %d月 %d日生　血液型:%s", p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);	//
}