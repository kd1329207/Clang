#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int dice,i;
	srand(time(0));
	for (i = 1; i <= 10; i++) {
		
		rand();
		rand();
		dice = rand() % 6 + 1;
		printf("%d回目\tサイコロは%dです\n",i, dice);
	}
}