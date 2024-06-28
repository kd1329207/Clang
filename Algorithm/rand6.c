#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int no1, no2;
	printf("何を出しますか？\n(1：グー　2：チョキ　3：パー)＞");
	scanf("%d", &no1);
	srand(time(0));
	rand();
	rand();
	no2 = rand() % 3;

	if (no1 == 1) {
		printf("プレイヤーはグーです\n");
		switch (no2) {
		case 0:printf("コンピュータはグーです\n\nあいこ"); break;
		case 1:printf("コンピュータはチョキです\n\n勝ち"); break;
		case 2:printf("コンピュータはパーです\n\n負け"); break;
		}
	}
	if (no1 == 2) {
		printf("プレイヤーはチョキです\n");
		switch (no2) {
		case 0:printf("コンピュータはグーです\n\n負け"); break;
		case 1:printf("コンピュータはチョキです\n\nあいこ"); break;
		case 2:printf("コンピュータはパーです\n\n勝ち"); break;
		}
	}
	if (no1==3){
		printf("プレイヤーはパーです\n");
		switch (no2) {
		case 0:printf("コンピュータはグーです\n\n勝ち"); break;
		case 1:printf("コンピュータはチョキです\n\n負け"); break;
		case 2:printf("コンピュータはパーです\n\nあいこ"); break;
		}
	}
}