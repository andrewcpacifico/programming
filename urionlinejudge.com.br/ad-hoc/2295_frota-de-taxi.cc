/**
 * Copyright (c) 2017 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>
#include <string.h>

int main()
{
    float a, g, ra, rg;

    scanf("%f%f%f%f", &a, &g, &ra, &rg);

    if (ra/a > rg/g) {
        printf("A\n");
    } else {
        printf("G\n");
    }

    return 0;
}
