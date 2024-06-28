#include <stdio.h>
main()
{
	int Time,h,m,s;
	printf("秒数を入力：");
	scanf("%d", &Time);
	if (Time <= 10000,	Time >= 0) {		//if (0< = Time <= 10000) の条件は不可
		h = Time / 3600;
		m = (Time - h * 3600) / 60;		//%(剰余)使っても行ける　m=(Time%3600)/60
		s = Time - (h * 3600 + m * 60);
		printf("%d時間%d分%d秒です", h, m, s);
	}
	else {
		printf("エラー");
	}
}