#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
    double t;        // 경사각
    double s;        // sin 근사
    double c;        // cos 근사
    double a;        // 가속도
    double ms = 0.5; // 정지마찰
    double mk = 0.4; // 동마찰
    double g = 9.81; // 중력

    printf("경사각(도): ");
    scanf("%lf", &t);

    if (t < 0 || t > 90) {
        printf("invalid input\n");
        return 0;
    }

    
    s = t / 90.0;
    c = 1.0 - (t / 90.0);

    if (c == 0) {
        printf("invalid input\n");
        return 0;
    }

    double tt = s / c; 

    if (tt <= ms) {
        printf("파렛트는 정지합니다.\n");
    }
    else {
        a = g * (s - mk * c);
        if (a < 0) a = 0;
        printf("파렛트는 미끄러집니다.\n");
        printf("가속도: %.3f m/s^2\n", a);
    }

    return 0;
}
