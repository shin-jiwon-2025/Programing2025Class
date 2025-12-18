#define _CRT_SECURE_NO_WARNINGS
#pragma warnings(disable: 4996)
#include <stdio.h>

int main(void)
{
	int dan;

	printf("출력할 단을 입력하세요 (0 입력 시 전체 출력): ");
	scanf("%d", &dan);

	if (dan == 0)
	{
		for (int i = 2; i <= 9; i++)
		{
			printf("\n[%d단]\n", i);
			for (int j = 1; j <= 9; j++)
			{
				printf("%d * %d = %d\n", i, j, i * j);
			}
		}
	}
	else if (dan >= 2 && dan <= 9)
	{
		printf("\n[%d단]\n", dan);
		for (int j = 1; j <= 9; j++)
		{
			printf("%d * %d = %d\n", dan, j, dan * j);
		}
	}
	else
	{
		printf("잘못된 입력입니다. 2~9 또는 0을 입력하세요. \n");
	}
		return 0;
}