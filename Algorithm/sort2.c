#include <stdio.h>
main()
{
	int i1, i2, w, d[5] = { 30,7,25,16,10 };

	printf("ソート前↓\n");
	for (i1 = 0; i1 < 5; i1++){
		printf("d[%d] = %d\n", i1, d[i1]);
	}

	for (i1 = 4; 0 < i1; i1--) {
		for (i2 = 0; i2 < 5; i2++) {
			if (d[i2 + 1] < d[i2]) {
				w = d[i2];
				d[i2] = d[i2 + 1];
				d[i2 + 1] = w;
			}
		}
	}

	printf("\nソート後↓\n");
	for (i1 = 0; i1 < 5; i1++){
		printf("d[%d] = %d\n", i1, d[i1]);
	}
	
}