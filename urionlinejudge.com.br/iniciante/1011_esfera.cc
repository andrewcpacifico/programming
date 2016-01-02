/**
 * Copyright (c) 2015 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>

#define PI 3.14159

int main(int argc, char *argv[])
{
    double raio;

    scanf("%lf", &raio);
    printf("VOLUME = %.3lf\n", (4/3.0) * PI * raio*raio*raio);
    
    return 0;
}
