#include <stdio.h>
main()
{
	int no, i=1;
	printf("��������́F");
	scanf("%d", &no);
	for (i = 1; i <= 5; i++) {
		printf("%d ", no * i);
	}


	/* while�ŏ����Ɓ�
	
	while (i <= 5) {
		printf("%d ", no * i);
		i++;
	}
	*/ 
}