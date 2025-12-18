#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4116)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void calc(int* arr, int start, int end, double* sum, double* var, double* std)
{
    int i;
    int n = end - start + 1;
    double avg = 0.0;

    *sum = 0.0;
    for (i = start; i <= end; i++)
        *sum += arr[i];

    avg = *sum / n;

    *var = 0.0;
    for (i = start; i <= end; i++)
        *var += (arr[i] - avg) * (arr[i] - avg);

    *var /= n;
    *std = sqrt(*var);
}

int main(void)
{
    int data[100];
    int i, s, e;
    double sum, var, std;

    srand(time(NULL));

    for (i = 0; i < 100; i++)
        data[i] = rand() % 100;

    scanf("%d %d", &s, &e);

    calc(data, s, e, &sum, &var, &std);

    printf("%.2f %.2f %.2f\n", sum, var, std);

    return 0;
}
