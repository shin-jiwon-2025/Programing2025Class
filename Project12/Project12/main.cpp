#include <stdio.h>

int main(void)
{
	int a, b, x, y, r, gcd, lcm;

	printf("�� ������ �Է��ϼ���: ");
	scanf("%d %d", &a, &b);

	x = a;
	y = b;

	while (y != 0)
	{
		r = x % y;
		x = y;
		y = r;
	}
	gcd = x;
	lcm = (a * b) / gcd;

	printf("�ִ�����(GCD): %d\n", gcd);
	printf("�ּҰ����(lcm): %d\n", lcm);

	return 0;
}