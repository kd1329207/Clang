#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int i,data[20],target,work[20];
	srand(time(0));
	for (i = 0; i < 20; i++) {
		data[i] = i+1;
	}
	printf("\n�`�`�`�m�F�`�`�`\n");
	for (i = 0; i < 20; i++) {
		printf("data[%2d]=%2d\n", i, data[i]);
	}
	for (i = 0; i < 20; i++) {
		target = rand() % 20;
		work= data[i];
		data[i] = work[target];
		data[target]=data[i]
	}
	printf("\n�`�`�`����ւ���`�`�`\n");
	for (i = 0; i < 20; i++) {
		printf("data[%2d]=%2d\n", i, data[i]);
	}
}