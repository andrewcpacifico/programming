/**
 * Copyright (c) 2015 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>

int main(int argc, char *argv[])
{
    double a, b, c;

    scanf("%lf%lf%lf", &a, &b, &c);
    printf("MEDIA = %.1lf\n", (a * 2 + b * 3 + c * 5)/10);
    
    return 0;
}
