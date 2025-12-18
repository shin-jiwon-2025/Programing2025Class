#pragma warning(disable:4116)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int next_num(int* seed)
{
    *seed = (*seed * 17 + 23) % 100000;
    return *seed;
}

int is_dup(int* a, int n)
{
    int i;
    for (i = 0; i < n; i++)
        if (a[i] == a[n]) return 1;
    return 0;
}

int main(void)
{
    int lotto[6], user[6];
    int i, j, cnt = 0;
    int seed;

    scanf("%d", &seed);

    for (i = 0; i < 6; i++)
    {
        do {
            lotto[i] = next_num(&seed) % 45 + 1;
        } while (is_dup(lotto, i));
    }

    for (i = 0; i < 6; i++)
        scanf("%d", &user[i]);

    for (i = 0; i < 6; i++)
        for (j = 0; j < 6; j++)
            if (lotto[i] == user[j]) cnt++;

    printf("%d\n", cnt);
    return 0;
}
