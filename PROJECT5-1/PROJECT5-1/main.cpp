#pragma warning(disable:4116)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void make_mat(int a[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            a[i][j] = rand() % 9 - 4;
}

void print_mat_i(int a[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }
}

void print_mat_d(double a[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%10.4f", a[i][j]);
        printf("\n");
    }
}

void add_mat(int a[3][3], int b[3][3], int r[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            r[i][j] = a[i][j] + b[i][j];
}

void sub_mat(int a[3][3], int b[3][3], int r[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            r[i][j] = a[i][j] - b[i][j];
}

void scalar_mat(int k, int a[3][3], int r[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            r[i][j] = k * a[i][j];
}

void mul_mat(int a[3][3], int b[3][3], int r[3][3])
{
    int i, j, k;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            r[i][j] = 0;
            for (k = 0; k < 3; k++)
                r[i][j] += a[i][k] * b[k][j];
        }
}

int det3(int a[3][3])
{
    int d;
    d = a[0][0] * (a[1][1] * a[2][2] - a[1][2] * a[2][1])
        - a[0][1] * (a[1][0] * a[2][2] - a[1][2] * a[2][0])
        + a[0][2] * (a[1][0] * a[2][1] - a[1][1] * a[2][0]);
    return d;
}

void cofactor3(int a[3][3], int c[3][3])
{
    c[0][0] = (a[1][1] * a[2][2] - a[1][2] * a[2][1]);
    c[0][1] = -(a[1][0] * a[2][2] - a[1][2] * a[2][0]);
    c[0][2] = (a[1][0] * a[2][1] - a[1][1] * a[2][0]);

    c[1][0] = -(a[0][1] * a[2][2] - a[0][2] * a[2][1]);
    c[1][1] = (a[0][0] * a[2][2] - a[0][2] * a[2][0]);
    c[1][2] = -(a[0][0] * a[2][1] - a[0][1] * a[2][0]);

    c[2][0] = (a[0][1] * a[1][2] - a[0][2] * a[1][1]);
    c[2][1] = -(a[0][0] * a[1][2] - a[0][2] * a[1][0]);
    c[2][2] = (a[0][0] * a[1][1] - a[0][1] * a[1][0]);
}

void transpose_i(int a[3][3], int t[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            t[j][i] = a[i][j];
}

int inverse3(int a[3][3], double inv[3][3])
{
    int d, i, j;
    int cof[3][3];
    int adj[3][3];

    d = det3(a);
    if (d == 0)
        return 0;

    cofactor3(a, cof);
    transpose_i(cof, adj);

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            inv[i][j] = (double)adj[i][j] / (double)d;

    return 1;
}

int main(void)
{
    int A[3][3], B[3][3];
    int k;
    int R1[3][3], R2[3][3], R3[3][3], R4[3][3];
    double invA[3][3], invB[3][3];
    int okA, okB;

    srand((unsigned)time(NULL));

    make_mat(A);
    make_mat(B);
    k = rand() % 7 - 3;

    printf("A:\n"); print_mat_i(A);
    printf("B:\n"); print_mat_i(B);
    printf("k: %d\n\n", k);

    add_mat(A, B, R1);
    printf("A+B:\n"); print_mat_i(R1);

    sub_mat(A, B, R2);
    printf("A-B:\n"); print_mat_i(R2);

    scalar_mat(k, A, R3);
    printf("k*A:\n"); print_mat_i(R3);

    mul_mat(A, B, R4);
    printf("A*B:\n"); print_mat_i(R4);

    okA = inverse3(A, invA);
    printf("det(A) = %d\n", det3(A));
    if (okA) { printf("inv(A):\n"); print_mat_d(invA); }
    else { printf("inv(A): not possible\n"); }

    okB = inverse3(B, invB);
    printf("det(B) = %d\n", det3(B));
    if (okB) { printf("inv(B):\n"); print_mat_d(invB); }
    else { printf("inv(B): not possible\n"); }

    return 0;
}
