#include <stdio.h>
#include <stdlib.h>
#include<time.h>

main()
{
	int i=0, k[20];
	char s[20];
	printf("���������́F");
	scanf("%s", &s);
	while (s[i] != '\0') {
		printf("s[%d]�̕������L�[�G", i);
		scanf("%d", &k[i]);
		s[i] = s[i] - k[i];
		i++;
	}
	printf("������������F%s", s);
}