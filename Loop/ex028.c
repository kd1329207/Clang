#include <stdio.h>
main()
{
	int gokei=0, ia;
	printf("���������");
	scanf("%d", &ia);
	while (ia != -999) {
		gokei += ia;	//gokei = gokei + ia �Ɠ��`
		printf("���������");
		scanf("%d",& ia);
	}
	printf("���v=%d", gokei);
}