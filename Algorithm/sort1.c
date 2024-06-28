#include <stdio.h>
main()
{
	int i1, i2, w, d[5] = { 30,7,25,16,10 };

	printf("ソート前↓\n");
	for (i1 = 0; i1 < 5; i1++){
		printf("d[%d] = %d\n", i1, d[i1]);
	}
	for (i1 = 0; i1 < 4; i1++) {
		for (i2 = i1 + 1; i2 < 5; i2++) {
			if (d[i2] < d[i1]) {
				w = d[i1];
				d[i1] = d[i2];
				d[i2] = w;
			}
		}
	}
	printf("\nソート後↓\n");
	for (i1 = 0; i1 < 5; i1++){
		printf("d[%d] = %d\n", i1, d[i1]);
	}
	
}