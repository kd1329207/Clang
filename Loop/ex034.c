#include <stdio.h>
main()
{
	int i;
	i = 1;
	do {
		printf("i=%d\n", i);
		i++;
	}while(i <= 10);		//do〜while文の最後のwhileには;が要る
}