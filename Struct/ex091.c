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
	printf("���O��");
	scanf("%s", &p->name);
	printf("���N������");
	scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);	//�|�C���^p��birth[0] �̒��g(->)�̃A�h���X(&)
	printf("���t�^��");
	scanf("%s", &p->blood);

	printf("%s�@%d�N %d�� %d�����@���t�^:%s", p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);	//
}