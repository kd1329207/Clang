#include <stdio.h>
#define SIZE 5
main()
{
	int i1, i2, w, d[5] = { 30,7,25,16,10 };

	printf("�\�[�g�O��\n");
	for (i1 = 0; i1 < SIZE; i1++){
		printf("d[%d] = %d\n", i1, d[i1]);
	}

	for (i1 = 1; i1 < 5; i1++) {
		for (i2 = i1 - 1; 0 <= i2; i2--) {
			if (d[i2] <= d[i2 + 1])break;
			w = d[i2];
			d[i2] = d[i2 + 1];
			d[i2 + 1] = w;
		}
	}

	printf("\n�\�[�g�に\n");
	for (i1 = 0; i1 < SIZE; i1++){
		printf("d[%d] = %d\n", i1, d[i1]);
	}
	
}