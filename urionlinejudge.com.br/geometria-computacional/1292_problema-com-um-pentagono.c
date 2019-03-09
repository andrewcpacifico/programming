/**
 * Copyright (c) 2019 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>
#include <math.h>

const double PI = 3.14159265358979323846;

int main()
{
    double f, val;

    val = PI / 180;

    while (scanf("%lf", &f) != EOF) {
        printf("%.10lf\n", f * (sin(108 * val) / sin(63 * val)));
    }

    return 0;
}
