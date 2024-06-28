#include <stdio.h>
main()
{
	int i;
	float no,sum=0, box[3];
	for (i = 0; i < 3; i++) {
		printf("ŽÀ”‚ð“ü—ÍF");
		scanf("%f", &box[i]);
		sum += box[i];
	}
	printf("\n‡Œv\t%.2f\n", sum);
	printf("•½‹Ï\t%.2f\n", sum / 3);
}