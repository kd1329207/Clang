#include <stdio.h>

main()
{
	int tbl[][3] = { {10,20,30},{40,50,60},{70,80,90} };
	int* p_tbl, i1,i2;

	p_tbl = &tbl[0][1];
	printf("2次元配列tbl1列目の内容\n");
	for (i1 = 0; i1< 3 ; i1++) {
		printf("%d ", *p_tbl);
		p_tbl = p_tbl + 3;
	}
}