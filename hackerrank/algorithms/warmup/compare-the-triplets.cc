/**
 * Copyright (c) 2015 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>

int main(int argc, char *argv[])
{
    int a0, a1, a2, b0, b1, b2, ca = 0, cb = 0;

    scanf("%d %d %d", &a0, &a1, &a2);
    scanf("%d %d %d", &b0, &b1, &b2);

    ca += (a0 > b0);
    ca += (a1 > b1);
    ca += (a2 > b2);

    cb += (b0 > a0);
    cb += (b1 > a1);
    cb += (b2 > a2);

    printf("%d %d", ca, cb);

    return 0;
}
