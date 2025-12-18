#pragma warning(disable:4116)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void simulate(double dt, double g, double vx, double vy,
    double* t_fly, double* y_max, double* x_range)
{
    double t = 0.0;
    double x, y;
    double last_t = 0.0, last_y = 0.0, last_x = 0.0;

    int i;
    double xs[5000];
    double ys[5000];
    int n = 0;

    *y_max = 0.0;

    for (i = 0; i < 5000; i++)
    {
        x = vx * t;
        y = vy * t - 0.5 * g * t * t;

        xs[n] = x;
        ys[n] = y;
        n++;

        if (y > *y_max)
            *y_max = y;

        if (i > 0 && y < 0.0)
        {
            double r = last_y / (last_y - y);
            *t_fly = last_t + r * dt;
            *x_range = last_x + r * (x - last_x);
            return;
        }

        last_t = t;
        last_x = x;
        last_y = y;

        t += dt;
    }

    *t_fly = t;
    *x_range = x;
}

int main(void)
{
    double dt = 0.01;
    double g = 9.81;

    double v = 15.0;
    double sin75 = 0.965925826;
    double cos75 = 0.258819045;

    double vx = v * cos75;
    double vy = v * sin75;

    double t_fly, y_max, x_range;

    simulate(dt, g, vx, vy, &t_fly, &y_max, &x_range);

    printf("time = %.4f\n", t_fly);
    printf("ymax = %.4f\n", y_max);
    printf("range = %.4f\n", x_range);

    return 0;
}
