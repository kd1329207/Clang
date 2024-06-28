#include <stdio.h>
main()
{
	char go='5', ro='6';
	printf("%c×%c=%d", go, ro, (go-48) * (ro-48));		//%dは文字コード('5'は16進数で0x35)を10進数に変換した数値
}