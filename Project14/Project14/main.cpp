#define _CRT_SECURE_WARNINGS
#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int a, b, x, y, r, gcd, lcm;

	printf("input two differnt numbers: ");
	scanf("%d %d", &a, &b);

	x = a;
	y = b;

	do
	{
		r = x % y;
		x = y;
		y = r;
	} while (y != 0);

	gcd = x;
	lcm = (a * b) / gcd;

	printf("GCD: %d\n", gcd);
	printf("LCM: %d\n", lcm);

	return 0;
}