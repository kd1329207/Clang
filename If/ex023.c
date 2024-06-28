#include <stdio.h>
main()
{
	int Time,h,m,s;
	printf("•b”‚ğ“ü—ÍF");
	scanf("%d", &Time);
	if (Time <= 5000) {
		h = Time / 3600;
		m = Time % 3600 / 60;
		s = Time - (h * 3600 + m * 60);
		printf("%dŠÔ%d•ª%d•b‚Å‚·", h, m, s);
	}
	else {
		printf("ƒGƒ‰[");
	}
}