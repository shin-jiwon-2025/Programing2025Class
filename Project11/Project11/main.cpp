#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	char op;

	cout << "����� ������ �Է��ϼ��� (��: 10 + 5): ";
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
			cout << "0���� ���� �� �����ϴ�!";
	}
	else if (op == '%')
	{
		if (num2 != 0)
			cout << num1 << "%" << num2 << "=" << num1 % num2;
		else
			cout << "0���� ���� �� �����ϴ�!";
	}
	else
	{
		cout << "�߸��� �������Դϴ�.";
	}
	return 0;
}