#include <stdio.h>
main()
{
	int no = 0, sum = 0, x = 0;
	for (no = 0; no != -999; no = no) {
		printf("��������́F");
		scanf("%d", &no);
		sum += no;
		x++;
	}
	sum += 999;
	printf("���v = %d\t���� = %.2f", sum, (float)sum / x);
}