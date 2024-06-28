#include <stdio.h>

main(int argc, char* argv)
{
	if (argc == 3) {
		printf("%d + %d = %d\n", atoi(argv[1]), atoi(argv[2]), atoi(argv[1]) + atoi(argv[2]));
	}
	else { printf("ÉGÉâÅ["); }
}