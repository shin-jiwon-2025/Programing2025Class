#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
    int door;      // 0: 닫힘, 1: 열림
    double temp;   // 현재 온도 (°C)
    double sec;    // door==1: 문이 열린 시간, door==0: 범위 이탈 경과 시간
    int status;    // 0: Normal, 1: Warning, 2: Critical

    printf("문 상태를 입력하세요 (0: 닫힘, 1: 열림): ");
    scanf("%d", &door);

    printf("현재 온도(°C)를 입력하세요: ");
    scanf("%lf", &temp);

    printf("시간(sec)을 입력하세요 (문 열림 또는 범위 이탈 경과 시간): ");
    scanf("%lf", &sec);

    if ((door != 0 && door != 1) || sec < 0.0) {
        printf("invalid input\n");
        return 1;   // 강제 종료
    }

    status = 1;

    if (door == 0) {  // 문이 닫혀 있는 경우
        if (temp >= 2.0 && temp <= 8.0) {
            // 정상 범위 -> Normal
            status = 0;
        }
        else {
            // 문 닫힌 상태 + 온도 이탈
            status = (sec <= 30.0) ? 1 : 2;
        }
    }
    else {          
        if (sec >= 60.0 && (temp >= 8.0 || temp <= 2.0)) {
            status = 2;
        }
        else {
           
            status = 1;
        }
    }

    if (status == 0) {
        printf("Normal\n");
    }
    else if (status == 1) {
        printf("Warning\n");
    }
    else {
        printf("Critical\n");
    }

    return 0;
}