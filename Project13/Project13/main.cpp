#define _CRT_SECURE_NO_WARNINGS
#pragma warnings(disable: 4996)
#include <stdio.h>

int main(void)
{
	int dan;

	printf("����� ���� �Է��ϼ��� (0 �Է� �� ��ü ���): ");
	scanf("%d", &dan);

	if (dan == 0)
	{
		for (int i = 2; i <= 9; i++)
		{
			printf("\n[%d��]\n", i);
			for (int j = 1; j <= 9; j++)
			{
				printf("%d * %d = %d\n", i, j, i * j);
			}
		}
	}
	else if (dan >= 2 && dan <= 9)
	{
		printf("\n[%d��]\n", dan);
		for (int j = 1; j <= 9; j++)
		{
			printf("%d * %d = %d\n", dan, j, dan * j);
		}
	}
	else
	{
		printf("�߸��� �Է��Դϴ�. 2~9 �Ǵ� 0�� �Է��ϼ���. \n");
	}
		return 0;
}