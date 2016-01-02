/**
 * Copyright (c) 2015 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
    double x1, y1, x2, y2;

    scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);

    printf("%.4lf\n", sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)));

    return 0;
}
