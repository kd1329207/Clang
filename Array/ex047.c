#include <stdio.h>
main()
{
	int i1, i2;
	float x[3][2],sum=0;
	for (i1 = 0; i1 < 3; i1++) {
		for (i2 = 0; i2 < 2; i2++) {
			printf("x[%d][%d] = ", i1, i2);
			scanf("%f", &x[i1][i2]);
			sum += x[i1][i2];
		}
		printf("%ds–Ú‚Ì•½‹Ï = %.2f\n\n", i1, sum / 2);
		sum = 0;
	}
}