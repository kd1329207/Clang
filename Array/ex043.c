                                                    #include <stdio.h>
main()
{
	char data[] = "watermelon";
	int i = 0;
	printf("������F%s\n", data);
	while (data[i] != '\0') {
		i++;
	}
	printf("��������%d", i);
}