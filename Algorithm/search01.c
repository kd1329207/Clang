#include <stdio.h>
main()
{
	int i,s,d[10] = {10,5,30,77,16,3,47,29,37,33};
	printf("探索値を入力：");
	scanf("%d", &s);
	for (i = 0; i < 10; i++) {
		if (d[i] == s) {
			break;
		}
	}
	if (i == 10) {
		printf("見つからなかった");
	}
	else {
		printf("d[%d]で発見", i);
	}
}