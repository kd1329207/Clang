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
	printf("���O��");
	scanf("%s", &no1.name);
	printf("���N������");
	scanf("%d%d%d", &no1.birth[0], &no1.birth[1], &no1.birth[2]);
	printf("���t�^��");
	scanf("%s", &no1.blood);

	printf("%s�@%d�N %d�� %d�����@���t�^:%s", no1.name, no1.birth[0], no1.birth[1], no1.birth[2], no1.blood);
}