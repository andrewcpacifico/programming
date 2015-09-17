/**
 * Copyright (c) 2015 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>

int main(int argc, char *argv[])
{
    double a, b;

    scanf("%lf%lf", &a, &b);
    printf("MEDIA = %.5lf\n", (a * 3.5 + b * 7.5)/11);
    
    return 0;
}
