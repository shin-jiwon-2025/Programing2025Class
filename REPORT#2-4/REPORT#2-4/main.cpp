#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)
#include <stdio.h>

double f1(double a, double b, double c, double d)
{
    return a * b * c / d;   // 레이놀즈 수
}

double f2(double x, double y)
{
    return 0.5 * x * y * y; // 동압
}

void f3(double r)
{
    if (r < 2300) {
        printf("유동상태: 층류\n");
    }
    else if (r <= 4000) {
        printf("유동상태: 천이\n");
    }
    else {
        printf("유동상태: 난류\n");
    }
}

void f4(double rr, double qq)
{
    printf("Re = %.2lf\n", rr);
    printf("q = %.2lf Pa\n", qq);
}

int main(void)
{
    double a;  // 밀도
    double b;  // 점도
    double c;  // 내경
    double v;  // 유속
    double r;  // 레이놀즈
    double q;  // 동압

    printf("밀도를 입력하세요(kg/m3): ");
    scanf("%lf", &a);

    printf("점도 입력하세요(Pa*s): ");
    scanf("%lf", &b);

    printf("배관 내경 입력하세요(m): ");
    scanf("%lf", &c);

    printf("유속 입력하세요(m/s): ");
    scanf("%lf", &v);

    if (a <= 0 || b <= 0 || c <= 0 || v <= 0) {
        printf("invalid input\n");
        return 0;
    }

    r = f1(a, v, c, b);
    q = f2(a, v);

    f3(r);
    f4(r, q);

    return 0;
}