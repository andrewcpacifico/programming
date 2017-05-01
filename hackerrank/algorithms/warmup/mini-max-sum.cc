/**
 * Copyright (c) 2015 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>

int main(int argc, char *argv[])
{
    long long v[5], i, sum = 0, min, max;

    for (i = 0; i < 5; i++) {
        scanf("%lld", &v[i]);
        sum += v[i];
    }

    min = max = sum - v[0];
    for (i = 1; i < 5; i++) {
        if (sum - v[i] < min) min = sum - v[i];
        if (sum - v[i] > max) max = sum - v[i];
    }

    printf("%lld %lld", min, max);

    return 0;
}
