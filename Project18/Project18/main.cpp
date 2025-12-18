#include <stdio.h>

int rec_func(int n)
{
	if (n == 1)
		return 1;
	else
		return n + rec_func(n - 1);
}

int main(void)
{
	int sum;

	sum = rec_func(10);
	printf("%d\n", sum);

	return 0;
}