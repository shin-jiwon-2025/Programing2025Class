#define _CRT_SECURE_NO_WARNINGS
#pragma WARNINGS(disable:4996)
#include <stdio.h>

double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
int mod(int a, int b);

int main(void)
{
	double num1, num2;//���� ����
	char op;
	printf("��Ģ���� ���α׷�\n");
	printf("���ڿ� ��ȣ�� �Է��Ͻÿ�. (��: 10+3)\n");
	printf("�������� ����: +, -, *, /, %%\n\n");

	printf("ù��° �����ڿ� �ι�° ������ ������� �Է��Ͻÿ�\n");
	scanf("%lf %c %lf", &num1, &op, &num2);

	switch (op)
	{
	case '+':
		printf("���: %.2lf\n", add(num1, num2));
			break;
	case '-':
		printf("���: %.2lf\n", subtract(num1, num2));
		break;
	case '*':
		printf("���: %.2lf\n", multiply(num1, num2));
		break;
	case '/':
		if ((int)num2 == 0)
			printf("0���� ���� �� �����ϴ�.\n");
		else
			printf("���: %.2lf\n", divide(num1, num2));
		break;
	case '%':
		if ((int)num2 == 0)
			printf("0���� ���� �� �����ϴ�.\n");
		else
			printf("���: %d\n", mod((int)num1, (int)num2));
		break;
	default:
		printf("�߸��� �������Դϴ�.\n");
	}
	return 0;
}
double add(double a, double b)
{
	return a + b;
}
double subtract(double a, double b)
{
	return a - b;
}
double multiply(double a, double b)
{
	return a * b;
}
double divide(double a, double b)
{
	return a / b;
}
int mod(int a, int b)
{
	return a % b;
}