#include <stdio.h>
main()
{
	int A, B, C,sum;
	float avg;
	printf("������3���́F");
	scanf("%d%d%d", &A, &B, &C);
	sum = A + B + C;
	avg = (float)sum / 3.0;		//(float) �̓L���X�g(�^�ϊ�)
	printf("���v=%d\t����=%.2f\n",sum,avg);	//\t �^�u�̃X�y�[�X��}������
	printf("�v=%d\t����=%.2f", sum, avg);	

}