#include <stdio.h>
main()
{
	int no = 0, sum = 0, x = 0;
	for (no = 0; no != -999; no = no) {
		printf("整数を入力：");
		scanf("%d", &no);
		sum += no;
		x++;
	}
	sum += 999;
	printf("合計 = %d\t平均 = %.2f", sum, (float)sum / x);
}