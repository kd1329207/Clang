#include <stdio.h>
main()
{
	int a, b, w;
	a = 5; b = 3;
	printf("入れ替え前\ta=%d,b=%d\n", a, b);
	w = a;
	a = b;
	b = w;
	printf("入れ替え後\ta=%d,b=%d", a, b);
}