#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
    int num;                 // ½Â°´ ¼ö
    double w1 = 0, w2 = 0, w3 = 0;   // ½Â°´ ¸ö¹«°Ô
    double cargo = 0;        // Áü ¹«°Ô
    double total = 0;        // ÃÑ ÇÏÁß

    printf("½Â°´ ¼ö¸¦ ÀÔ·ÂÇÏ¼¼¿ä (1~3¸í): ");
    scanf("%d", &num);

    // ½Â°´ ¼ö ¹°¸®Àû ¹üÀ§ °Ë»ç
    if (num < 1 || num > 3) {
        printf("invalid input\n");
        return 1;
    }

    // ½Â°´ ¸ö¹«°Ô ÀÔ·Â
    if (num >= 1) {
        printf("1¹ø ½Â°´ÀÇ ¸ö¹«°Ô(kg): ");
        scanf("%lf", &w1);
        if (w1 <= 0) {
            printf("invalid input\n");
            return 1;
        }
    }
    if (num >= 2) {
        printf("2¹ø ½Â°´ÀÇ ¸ö¹«°Ô(kg): ");
        scanf("%lf", &w2);
        if (w2 <= 0) {
            printf("invalid input\n");
            return 1;
        }
    }
    if (num == 3) {
        printf("3¹ø ½Â°´ÀÇ ¸ö¹«°Ô(kg): ");
        scanf("%lf", &w3);
        if (w3 <= 0) {
            printf("invalid input\n");
            return 1;
        }
    }

    // Áü ¹«°Ô ÀÔ·Â
    printf("Áü ¹«°Ô(kg, ¾øÀ¸¸é 0): ");
    scanf("%lf", &cargo);

    // Áü ¹«°Ô ¹°¸®Àû °Ë»ç
    if (cargo < 0) {   // À½¼ö ¹«°Ô´Â ¸»ÀÌ ¾È µÊ
        printf("invalid input\n");
        return 1;
    }

    // ½Â°´ 3¸íÀÏ ¶§´Â ÁüÀ» ½ÇÀ» ¼ö ¾øÀ½
    if (num == 3 && cargo > 0) {
        printf("invalid input\n");
        return 1;
    }

    // ÃÑ ÇÏÁß °è»ê
    total = w1 + w2 + w3 + cargo;

    // Á¤°Ý ÇÏÁß ºñ±³ (if¹® È°¿ë)
    if (total <= 600.0) {
        printf("OK\n");
    }
    else {
        printf("Overload\n");
    }

    return 0;
}