//1101020kadai036.c

#include<stdio.h>

main() 
{
	int a,b;
	printf("®”2‚Â„");
	scanf("%d%d", &a,&b);
	if (a < b) { printf("%d ‚Í %d ‚æ‚è %d ¬‚³‚¢", a, b, b - a); }
	if (b < a) { printf("%d ‚Í %d ‚æ‚è %d ¬‚³‚¢", b, a, a - b); }
	if (b == a) { printf("%d ‚Æ %d ‚Í“™‚µ‚¢", b, a); }
}