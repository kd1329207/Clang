#include <stdio.h>
main()
{
	int gokei=0, ia;
	printf("数をいれて");
	scanf("%d", &ia);
	while (ia != -999) {
		gokei += ia;	//gokei = gokei + ia と同義
		printf("数をいれて");
		scanf("%d",& ia);
	}
	printf("合計=%d", gokei);
}