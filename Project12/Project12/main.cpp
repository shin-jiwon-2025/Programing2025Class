#include <stdio.h>

int main(void)
{
	int a, b, x, y, r, gcd, lcm;

	printf("두 정수를 입력하세요: ");
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

	printf("최대공약수(GCD): %d\n", gcd);
	printf("최소공배수(lcm): %d\n", lcm);

	return 0;
}