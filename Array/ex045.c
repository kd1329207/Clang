#include <stdio.h>
main()
{
	int a[2][3] = { {10,20,30},{1,2,3} },sum1=0,sum2=0,i;
	for (i = 0; i < 3; i++) {
		sum1 += a[0][i];
		printf("a[0][%d] = %d\n", i, a[0][i]);
	}
	printf("0行目の合計 = %d\n\n\n", sum1);
		for (i = 0; i <3; i++) {
			sum2 += a[1][i];
			printf("a[1][%d] = %d\n", i, a[1][i]);
		}
	printf("1行目の合計 = %d", sum2);
}