#include <stdio.h>
#include <string.h>
#define SIZE 5


struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};


main()
{
	struct profile data[SIZE];

	int i;
	for (i = 0; i < SIZE; i++) {
		printf("����%d�l��\n",i+1);
		printf("���O��");
		scanf("%s", &data[i].name);
		printf("���N������");
		scanf("%d%d%d", &data[i].birth[0], &data[i].birth[1], &data[i].birth[2]);
		printf("���t�^��");
		scanf("%s", &data[i].blood);
		printf("\n");
	}
	for (i = 0; i < SIZE; i++) {
		if (strcmp(data[i].blood, "A") == 0) {
			printf("%s�@%d�N %d�� %d�����@���t�^:%s\n", data[i].name, data[i].birth[0], data[i].birth[1], data[i].birth[2], data[i].blood);
		}
	}
}