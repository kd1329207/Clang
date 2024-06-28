#include <stdio.h>
#include <stdlib.h>
#include<time.h>

main()
{
	char s[20];
	int i,i2, k[20];
	srand(time(0));
	printf("文字列を入力：");
	scanf("%s", &s);
	i = 0;
	while (s[i] != '\0') {
		k[i] = rand() % 5;
		s[i] = s[i] + k[i];
		i++;
	}
	printf("暗号化文字列：%s\n", s);
	printf("暗号化キー　：");
	for (i2 = 0; i2 < i; i2++) {
		printf("%d", k[i2]);
	}
}