#include <stdio.h>
int max(int data[]);	//�֐����͂킩��₷������
int min(int data[]);
#define SIZE 10

main()
{
	int data[] = { 6,10,8,2,9,5,1,7,-11,55 },no;
	no = max(data);
	printf("�ő�l�F%d\n", no);
	no = min(data);
	printf("�ŏ��l�F%d\n", no);
}

int max(int data[])
{
	int no=data[0], i;
	for (i = 1; i < SIZE; i++) {
		if (no < data[i]) {
			no = data[i];
		}
	}
	return no;
}

int min(int data[])
{
	int no = data[0], i;
	for (i = 1; i < SIZE; i++) {
		if (no > data[i]) {
			no = data[i];
		}
	}
	return no;
}