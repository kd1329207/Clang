#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int a, b, c;
	srand(time(0));
	a = rand() % 100;
	b = rand();
	printf("a=%d\tb=%d\tc=%d", a, b, c);
}