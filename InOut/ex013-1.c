#include <stdio.h>
main()
{
	char go='5', ro='6';
	printf("%c�~%c=%d", go, ro, (go-48) * (ro-48));		//%d�͕����R�[�h('5'��16�i����0x35)��10�i���ɕϊ��������l
}