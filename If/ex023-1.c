#include <stdio.h>
main()
{
	int Time,h,m,s;
	printf("�b������́F");
	scanf("%d", &Time);
	if (Time <= 10000,	Time >= 0) {		//if (0< = Time <= 10000) �̏����͕s��
		h = Time / 3600;
		m = (Time - h * 3600) / 60;		//%(��])�g���Ă��s����@m=(Time%3600)/60
		s = Time - (h * 3600 + m * 60);
		printf("%d����%d��%d�b�ł�", h, m, s);
	}
	else {
		printf("�G���[");
	}
}