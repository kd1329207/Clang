#include <stdio.h>
main()
{
	int s,low, mid, high, d[] = { 10,15,18,23,28,35,47,55,68,78,96 };
	printf("�T���l����́F");
	scanf("%d", &s);
	low = 0, high = 10;
	while (low <= high) {
		mid = (low + high) / 2;
		if (s == d[mid]) break;
		if (d[mid] < s) {
			low = mid + 1;
		}
		if (s <d[mid]) {
			high = mid - 1;
		}
	}
	if (high < low) {
		printf("������Ȃ�����");
	}
	else {
		printf("d[%d]�Ŕ���", mid);
	}
}