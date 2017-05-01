/**
 * Copyright (c) 2015 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;
    long int n, height, max = 0, maxCount = 0;

    scanf("%ld", &n);

    while(scanf("%ld", &height) != EOF) {
        if (height > max) {
            maxCount = 1;
            max = height;
        } else if (height == max) {
            maxCount++;
        }
    }

    printf("%ld", maxCount);

    return 0;
}
