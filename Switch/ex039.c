#include <stdio.h>
main()
{
	char ope;
	int no1, no2, no3;
	printf("��������́F");
	scanf("%c", &ope);
	printf("������3����");
	scanf("%d%d%d", &no1, &no2, &no3);
	/*if ('a' <= ope) {
		ope -= 32;
	}*/
	switch (ope) {
		case 'G':printf("%d", no1 + no2 + no3);
		case 'H':printf("%.2f", (float)(no1 + no2 + no3) / 3);
		//case 'D':printf("")
	}
}