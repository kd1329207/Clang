#include <stdio.h>
main()
{
	char* p_ride[3] = { "car","bus","shinkansen" };
	for (int i = 0; i < 3; i++) {
		while (*p_ride[i] != '\0') {
			putchar(*p_ride[i]++);
		}
		printf("\n");
	}
}