#include <stdio.h>

main() {
	int tbl[][3] = { {10,20,30},{40,50,60},{70,80,90} };
	int* p_tbl, i1,i2;

	p_tbl = &tbl[1][0];
	printf("2ŸŒ³”z—ñtbl1s–Ú‚Ì“à—e\n");
	for (i1 = 0; i1< 3 ; i1++) {
		printf("%d ", *p_tbl++);
	}
}