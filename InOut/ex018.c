#include <stdio.h>
main()
{
	int A, B, C,sum;
	float avg;
	printf("整数を3個入力：");
	scanf("%d%d%d", &A, &B, &C);
	sum = A + B + C;
	avg = (float)sum / 3.0;		//(float) はキャスト(型変換)
	printf("合計=%d\t平均=%.2f\n",sum,avg);	//\t タブのスペースを挿入する
	printf("計=%d\t平均=%.2f", sum, avg);	

}