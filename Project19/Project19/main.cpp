#include <stdio.h>

double centi_to_meter(double cm);

int main(void)
{
	double res;

	res = centi_to_meter(187);
	printf("%2lfm\n", res);

	return 0;
}
	double centi_to_meter(double cm)
	{
		double m;
		m = cm / 100.0;
		return m;
	}