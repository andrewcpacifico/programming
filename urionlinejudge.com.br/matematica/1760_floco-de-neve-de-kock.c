/**
 * Copyright (c) 2019 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>
#include <math.h>

int main()
{
    int l;
    double area, result;

    while (scanf("%d", &l) != EOF) {
        area = (double) (l*l)*(sqrt(3)/4);
        result = (area * 8) / 5;

        printf("%.2lf\n", result);
    }

    return 0;
}
