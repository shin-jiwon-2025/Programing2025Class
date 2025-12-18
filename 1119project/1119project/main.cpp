#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include <stdio.h>
void cal_line(double* p1, double* p2, double* S, double* B)
{
	*S = (p2[1] - p2[0] / p1[1] - p1[0]);

	*B = (p2[0] - (*S) * p1[0]);

}
int main(void)
{
	double p1[2], p2[2];
	double S, B;

	printf("Input 1st point information: \n");
	scanf("%lf %lf", &p1[0], &p2[0]);

	printf("Input 1st point information: \n");
	scanf("%lf %lf", &p1[1], &p2[1]);

	cal_line(p1, p2, &S, &B);

	printf("Calculated Output, line equation : \n");
	printf("slope: %.4lf\n", S);
	printf("bias: %.4lf\n", B);

	return 0;
}
