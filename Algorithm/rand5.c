#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int no, i;
	srand(time(0));
	for (i = 0; i < 100;i++) {
		rand();
		rand();
		no = rand() % 300 + 1;
		printf("%d\n", no);
		
	}
}