//1101020kadai095.c
#include<stdio.h>

main(){
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int suma=0,sumb=0, i;
	
	printf("�z��a = ");
	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
		suma += a[i];
	}
	printf("\n���v = %d\t���� = %.2f", suma, (float)suma / 10);
	printf("\n�z��b = ");
	for (i = 0; i < 10; i++) {
		printf("%d ", b[i]);
		sumb += b[i];
	}
	printf("\n���v = %d\t���� = %.2f", sumb, (float)sumb / 10);
}