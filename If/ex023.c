#include <stdio.h>
main()
{
	int Time,h,m,s;
	printf("秒数を入力：");
	scanf("%d", &Time);
	if (Time <= 5000) {
		h = Time / 3600;
		m = Time % 3600 / 60;
		s = Time - (h * 3600 + m * 60);
		printf("%d時間%d分%d秒です", h, m, s);
	}
	else {
		printf("エラー");
	}
}