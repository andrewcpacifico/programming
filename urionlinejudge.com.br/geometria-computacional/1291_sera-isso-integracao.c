/**
 * Copyright (c) 2019 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>
#include <math.h>

const double PI = 3.14159265358979323846;

int main()
{
    long double a, x, y, z;

    while (scanf("%Lf", &a) != EOF) {
        x = (a * a) - 2 * (PI * (a * a) / 12) - ((a * a) * sqrt(3) / 4);
        y = (a * a) - (PI * (a * a) / 4) - (2 * x);
        z = (a * a) - (4 * x) - (4 * y);

        printf("%.3Lf %.3Lf %.3Lf\n", z, 4*y, 4*x);
    }

    return 0;
}
