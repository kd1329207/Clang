#include <stdio.h>
main()
{
	int a[2][3] = { {10,20,30},{1,2,3} }, sum1 = 0, sum2 = 0, i1,i2;
	for (i1 = 0; i1 < 2; i1++) {
		for (i2 = 0; i2 < 3; i2++) {
			sum1 += a[i1][i2];
			printf("a[%d][%d] = %d\n", i1,i2, a[i1][i2]);
		}
		printf("%ds–Ú‚Ì‡Œv = %d\n\n\n",i1, sum1);
		sum1 = 0;
	}

}