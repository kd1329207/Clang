#include <stdio.h>
main()
{
	char data[] = "Apple";
	int i;
	printf("�ꕶ�����\��\n");
	for (i = 0; i < 5; i++) {
		printf("%c", data[i]);
	}
	printf("\n������ŕ\��\n");
	printf("%s", &data);
}