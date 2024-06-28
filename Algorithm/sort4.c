#include <stdio.h>
#define DCNT 8
main()
{
	int d[DCNT] = { 70,60,80,50,40,20,30,10 };
	int i1, i2, w, gap;

	gap = DCNT / 2;
	while (gap > 0) {
		for (i1 = gap; i1 < DCNT; i1++) {
			for (i2 = i1 - gap; 0 <= i2; i2 -= gap) {
				int k;
				for (k = 0; k < DCNT; k++) {
					printf("%d", d[k]);
				}
				printf("\n");
				if (d[i2 + gap] < d[i2]) {
					w = d[i2];
					d[i2] = d[i2 + gap];
					d[i2 + gap] = w;
				}
				else break;
			}
		}
		gap = gap / 2;
		printf("-----------------\n");
	}
	for (i1 = 0; i1 < DCNT; i1++) {
		printf("%d ", d[i1]);
	}
}