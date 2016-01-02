/**
 * Copyright (c) 2015 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double c;
    int d;

    scanf("%d%lf", &d, &c);
    printf("%.3lf km/l\n", d/c);

    return 0;
}
