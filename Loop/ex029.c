#include <stdio.h>
main()
{
	int no, co = 1;
	printf("数をいれて：");
	scanf("%d", &no);
	while (co <= no) {
		printf("*");
		co += 1;
	}
}