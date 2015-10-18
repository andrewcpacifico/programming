/**
 * Copyright (c) 2015 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>

int main(int argc, char *argv[])
{
    int n, aux;
    unsigned long int sum;

    scanf("%d", &n);

    while (n--) {
        scanf("%d", &aux);
        sum += aux;
    }

    printf("%lu", sum);

    return 0;
}
