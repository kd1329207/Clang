#include <stdio.h>
main()
{
	char moji,data[] = "Language";
	char* p_data;
	p_data = data;
	int i;
	printf("%s\n", data);
	printf("���������́H��");
	scanf("%c", &moji);
	printf("�������ʂ�");
	
	for (p_data = data, i = 0; *(p_data + i) != '\0'; i++) {
		if (moji == *(p_data + i)) {
			printf("%d ", i + 1);
		}
	}
	printf("�����ڂł�");

	//while (*p_data!='\0') {
	//	if (moji == *p_data) {
	//		printf("%d ", p_data - &data[0]+1);
	//	}
	//	*p_data++;
	//}
	//printf("�����ڂł�");
}