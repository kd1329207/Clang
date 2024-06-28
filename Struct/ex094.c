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
		printf("“ü—Í%dl–Ú\n",i+1);
		printf("–¼‘O„");
		scanf("%s", &data[i].name);
		printf("¶”NŒŽ“ú„");
		scanf("%d%d%d", &data[i].birth[0], &data[i].birth[1], &data[i].birth[2]);
		printf("ŒŒ‰tŒ^„");
		scanf("%s", &data[i].blood);
		printf("\n");
	}
	for (i = 0; i < SIZE; i++) {
		if (strcmp(data[i].blood, "A") == 0) {
			printf("%s@%d”N %dŒŽ %d“ú¶@ŒŒ‰tŒ^:%s\n", data[i].name, data[i].birth[0], data[i].birth[1], data[i].birth[2], data[i].blood);
		}
	}
}