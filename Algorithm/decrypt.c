#include <stdio.h>
main()
{
	char s[1000];
	int i = 0;
	printf("暗号化文字列を入力：");
	scanf("%s", &s);
	while (s[i] != '\0') {
		s[i] = s[i] - 1;
		i++;
	}
	i = 0;
	printf("復号化文字列：%s", s);
}