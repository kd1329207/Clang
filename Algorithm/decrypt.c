#include <stdio.h>
main()
{
	char s[1000];
	int i = 0;
	printf("�Í������������́F");
	scanf("%s", &s);
	while (s[i] != '\0') {
		s[i] = s[i] - 1;
		i++;
	}
	i = 0;
	printf("������������F%s", s);
}