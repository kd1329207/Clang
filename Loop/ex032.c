#include <stdio.h>
main()
{
	int no, i=1;
	printf("整数を入力：");
	scanf("%d", &no);
	for (i = 1; i <= 5; i++) {
		printf("%d ", no * i);
	}


	/* whileで書くと↓
	
	while (i <= 5) {
		printf("%d ", no * i);
		i++;
	}
	*/ 
}