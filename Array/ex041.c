#include <stdio.h>
main()
{
	int i;
	float no,sum=0, box[3];
	for (i = 0; i < 3; i++) {
		printf("実数を入力：");
		scanf("%f", &box[i]);
		sum += box[i];
	}
	printf("\n合計\t%.2f\n", sum);
	printf("平均\t%.2f\n", sum / 3);
}