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
		printf("%d���\t�T�C�R����%d�ł�\n",i, dice);
	}
}