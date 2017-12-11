/**
 * Copyright (c) 2017 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>

int main()
{
    float v;
    scanf("%f", &v);

    if ( v >= 0 && v <= 25 ) {
        printf("Intervalo [0,25]\n");
    } else if ( v > 25 && v <= 50 ) {
        printf("Intervalo (25,50]\n");
    } else if ( v > 50 && v <= 75) {
        printf("Intervalo (50,75]\n");
    } else if ( v > 75 && v <= 100 ) {
        printf("Intervalo (75,100]\n");
    } else {
        printf("Fora de intervalo\n");
    }

    return 0;
}
