#include <stdio.h>
main()
{
	int no;
	printf("��������́F");
	scanf("%d", &no);
	switch (no / 10) {
	case 1:printf("10�_��"); break;
	case 2:printf("20�_��"); break;
	case 3:printf("30�_��"); break;
	case 4:printf("40�_��"); break;
	default:printf("�G���[");break;
	}
}