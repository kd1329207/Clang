#include <stdio.h>
#include <stdlib.h>
#include<time.h>

main()
{
	char s[20];
	int i,i2, k[20];
	srand(time(0));
	printf("���������́F");
	scanf("%s", &s);
	i = 0;
	while (s[i] != '\0') {
		k[i] = rand() % 5;
		s[i] = s[i] + k[i];
		i++;
	}
	printf("�Í���������F%s\n", s);
	printf("�Í����L�[�@�F");
	for (i2 = 0; i2 < i; i2++) {
		printf("%d", k[i2]);
	}
}