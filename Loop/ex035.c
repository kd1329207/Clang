#include<stdio.h>
main()
{
	int sum = 0,no,i=0;
	while (1) {		//(1)は真を表す(無限ループ)
		printf("整数を入力：");
		scanf("%d", &no);
		if (no == -999)break;
		sum += no;
		i++;
	}
	printf("合計=%d\t平均=%.2f", sum,(float)sum/i);
}