#include <stdio.h>
#include <stdlib.h>
#include<time.h>

main()
{
	int i=0, k[20];
	char s[20];
	printf("文字列を入力：");
	scanf("%s", &s);
	while (s[i] != '\0') {
		printf("s[%d]の復号化キー；", i);
		scanf("%d", &k[i]);
		s[i] = s[i] - k[i];
		i++;
	}
	printf("復号化文字列：%s", s);
}