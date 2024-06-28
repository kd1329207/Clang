//1101020kadai125.c
#include<stdio.h>

main() {
	int data[10] = { 10,20,30,40,50,60,70,80,-999 };
	int* p = data, i;
	printf("ポインタを固定で表示\n配列data[] = ");
	for (i = 0; i < 10; i++) {
		printf("%d,", data[i]);
	}
	printf("\nポインタを移動して表示\n配列data[] = ");
	for (i = 0; i < 10; p++, i++) {
		printf("%d,", *p);
	}
}