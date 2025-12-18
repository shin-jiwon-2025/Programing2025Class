#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	char op;

	cout << "계산할 수식을 입력하세요 (예: 10 + 5): ";
	cin >> num1 >> op >> num2;

	if (op == '+')
	{
		cout << num1 << "+" << num2 << "=" << num1 + num2;
	}
	else if (op == '-')
	{
		if (num2 != 0)
			cout << num1 << "-" << num2 << " = " << num1 - num2;
	}
	else if (op == '*')
	{
		cout << num1 << "*" << num2 << "=" << num1 * num2;
	}
	else if (op == '/')
	{
		if (num2 != 0)
			cout << num1 << "/" << num2 << "=" << num1 / num2;
		else
			cout << "0으로 나눌 수 없습니다!";
	}
	else if (op == '%')
	{
		if (num2 != 0)
			cout << num1 << "%" << num2 << "=" << num1 % num2;
		else
			cout << "0으로 나눌 수 없습니다!";
	}
	else
	{
		cout << "잘못된 연산자입니다.";
	}
	return 0;
}