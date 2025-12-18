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
	double num1, num2;//변수 지정
	char op;
	printf("사칙연산 프로그램\n");
	printf("숫자와 기호를 입력하시오. (예: 10+3)\n");
	printf("연산자의 종류: +, -, *, /, %%\n\n");

	printf("첫번째 연산자와 두번째 연산자 순서대로 입력하시오\n");
	scanf("%lf %c %lf", &num1, &op, &num2);

	switch (op)
	{
	case '+':
		printf("결과: %.2lf\n", add(num1, num2));
			break;
	case '-':
		printf("결과: %.2lf\n", subtract(num1, num2));
		break;
	case '*':
		printf("결과: %.2lf\n", multiply(num1, num2));
		break;
	case '/':
		if ((int)num2 == 0)
			printf("0으로 나눌 수 없습니다.\n");
		else
			printf("결과: %.2lf\n", divide(num1, num2));
		break;
	case '%':
		if ((int)num2 == 0)
			printf("0으로 나눌 수 없습니다.\n");
		else
			printf("결과: %d\n", mod((int)num1, (int)num2));
		break;
	default:
		printf("잘못된 연산자입니다.\n");
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