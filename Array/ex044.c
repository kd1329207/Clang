#include <stdio.h>
main()
{
	char moji1[100], moji2[100],moji3[100];
	int i = 1;
	printf("文字列1を入力：");
	scanf("%s", &moji1);
	printf("文字列2を入力：");
	scanf("%s", &moji2);
	
	printf("moji1 = %s\tmoji2 = %s\n", moji1, moji2);

	//入れ替え
	for (i = 0; moji1[i] != '\0'; i++) {		
		moji3[i] = moji1[i];
	}
	moji3[i] = '\0';

	for (i = 0; moji2[i] != '\0'; i++) {
		moji1[i] = moji2[i];
	}
	moji1[i] = '\0';

	for (i = 0; moji3[i] != '\0'; i++) {
		moji2[i] = moji3[i];
	}
	moji2[i] = '\0';

	
	printf("入れ替えると\nmoji1 = %s\tmoji2 = %s\n", moji1, moji2);
}