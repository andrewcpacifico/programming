/**
 * Copyright (c) 2017 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>

int main()
{
    int n, i;

    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("%d %d %d\n", i, i*i, i*i*i);
    }

    return 0;
}
