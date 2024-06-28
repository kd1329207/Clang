//1101020kadai12p.c

#include<stdio.h>
main() 
{
	char* day[] = { "Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday",NULL };
	char** d = day;
	int i;
	for (i = 0; i < 7; i++) {
		printf("%s\n", *d++);
	}
	printf("==========\n");
	for (i = 0; i < 7; i++) {
		printf("%s\n", day[i]);
	}
}