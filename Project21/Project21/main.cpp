#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4116)
#include <stdio.h>

void print_status(int nav, int night)
{
    const char* label[3] = { "LEFT(RED)", "RIGHT(GREEN)", "TAIL(WHITE)" };
    const char* state = (nav == 1) ? "ON" : "OFF";
    int i;

    printf("\n--- STATUS ---\n");
    printf("NIGHT MODE : %s\n", (night == 1) ? "ON" : "OFF");

    for (i = 0; i < 3; i++)
        printf("%-13s : %s\n", label[i], state);

    printf("-------------\n");
}

int main(void)
{
    int nav = 0;
    int night = 0;
    int cmd = -1;

    while (1)
    {
        printf("\n[1] NAV ON  [0] NAV OFF  [2] NIGHT TOGGLE  [9] EXIT\n");
        printf("INPUT: ");
        if (scanf("%d", &cmd) != 1)
            break;

        if (cmd == 9)
            break;
        else if (cmd == 2)
        {
            night = (night == 0) ? 1 : 0;
        }
        else if (cmd == 1)
        {
            nav = 1;
        }
        else if (cmd == 0)
        {
            if (night == 1)
            {
                printf("WARNING: NIGHT MODE ON -> NAV should stay ON.\n");
                nav = 1;
            }
            else
            {
                nav = 0;
            }
        }
        else
        {
            printf("INPUT ERROR\n");
        }

        print_status(nav, night);
    }

    return 0;
}
