#include <stdio.h>
main()
{
	int sum=0, i1, i2, i3, a[2][2][3] = { {{3,4,5} ,{ 4,5,6 }},{ {2,2,3},{2,5,6} }};
	for (i1 = 0; i1 < 2; i1++) {
		printf("アパート%d　", i1 + 1);
		for (i2 = 0; i2 < 2; i2++) {
			printf("(%d階)：", i2+1);
			for (i3 = 0; i3 < 3; i3++) {
				sum += a[i1][i2][i3];
				printf("%d ", a[i1][i2][i3]);
			}
		}
		printf("\n");
	}
	printf("全体で%d人住んでいます", sum);
}