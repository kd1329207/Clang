//1101020kadai084.c

#include<stdio.h>
main() 
{
	int i,sum=0, a[2];
	while (1) {
		for (i = 0; i < 2; i++) {
			printf("®”%d(-999‚ÅI—¹)",i + 1);
			scanf("%d", &a[i]);
			sum += a[i];
		}
		if (a[0] == -999 || a[1] == -999)break;
		if (a[0] == 0 || a[1] == 0)continue;
		printf("%d / %d = %d ‚ ‚Ü‚è %d\n", a[1], a[2], sum / 2, sum % 2);
		sum = 0;
	
	}
}