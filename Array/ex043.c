                                                    #include <stdio.h>
main()
{
	char data[] = "watermelon";
	int i = 0;
	printf("文字列：%s\n", data);
	while (data[i] != '\0') {
		i++;
	}
	printf("文字数は%d", i);
}