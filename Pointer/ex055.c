#include <stdio.h>
main()
{
	int a[] = { 11,22,33,44,55,66 },*p_a,sum1=0;
	float b[] = { 11.1,22.2,33.3,44.4 },*p_b,sum2=0;
	p_a = a;
	p_b = b;
	for (int i = 0; i < 6; i++) {
		sum1 += *p_a;
		p_a++;
	}
	for (int i = 0; i < 4; i++) {
		sum2 += *p_b;
		p_b++;
	}
	printf("配列a\t合計=%d 平均=%.3f\n", sum1, (float)sum1 / 6);
	printf("配列b\t合計=%.3f 平均=%.3f\n", sum2, sum2 / 4);
}