#include <stdio.h>
main()
{
	float no1, no2, no3;
	printf("1�ڂ̎����F");
	scanf("%f", &no1);
	printf("2�ڂ̎����F");
	scanf("%f", &no2);
	printf("3�ڂ̎����F");
	scanf("%f", &no3);
	printf("���v��%f\n���ρ�%f", no1 + no2 + no3, (no1+ no2 + no3) / 3);
}