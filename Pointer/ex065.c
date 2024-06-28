#include <stdio.h>
#include <string.h>
#define CNT 4
main()
{
	char* p_tbl[] = { "Programming2","Algorithm","Programming1","C" },*w;
	int i1, i2;
	for (i1 = 0; i1 < CNT - 1; i1++) {
		for (i2 = i1 + 1; i2 < CNT; i2++) {
			if (strcmp(p_tbl[i1], p_tbl[i2]) > 0) {
				w = p_tbl[i1];
				p_tbl[i1] = p_tbl[i2];
				p_tbl[i2] = w;
			}
		}
	}
	for (i1 = 0; i1 < CNT; i1++) {
		printf("%s\n", p_tbl[i1]);

	}
}