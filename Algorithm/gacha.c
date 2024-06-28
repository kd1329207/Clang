#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int no;
	srand(time(0));
	rand();
	rand();
	no = rand() % 100 + 1;
	if (50<=no) {
		printf("š ƒm[ƒ}ƒ‹");
	}
	if (20<=no&&no<=49) {
		printf("šš ƒŒƒA");
	}
	if (6 <= no && no <= 19) {
		printf("ššš SR");
	}
	if (2 <= no && no <= 5) {
		printf("šššš UR");
	}
	if (no == 1) {
		printf("ššššš LR");
	}
}