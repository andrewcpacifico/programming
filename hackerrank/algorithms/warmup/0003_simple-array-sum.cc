/**
 * Copyright (c) 2015 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>

int main(int argc, char *argv[])
{
    int n, aux, sum = 0;

    scanf("%d", &n);

    while (n--) {
        scanf("%d", &aux);
        sum += aux;
    }

    printf("%d", sum);

    return 0;
}
