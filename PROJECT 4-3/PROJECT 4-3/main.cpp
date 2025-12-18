#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4116)
#include <stdio.h>

int dot(int* a, int* b)
{
    return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}

void cross(int* a, int* b, int* r)
{
    r[0] = a[1] * b[2] - a[2] * b[1];
    r[1] = a[2] * b[0] - a[0] * b[2];
    r[2] = a[0] * b[1] - a[1] * b[0];
}

int main(void)
{
    int v1[3], v2[3], res[3];
    int i;

    for (i = 0; i < 3; i++)
        scanf("%d", &v1[i]);
    for (i = 0; i < 3; i++)
        scanf("%d", &v2[i]);

    printf("%d\n", dot(v1, v2));

    cross(v1, v2, res);
    printf("%d %d %d\n", res[0], res[1], res[2]);

    return 0;
}
