/**
 * Copyright (c) 2015 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n, countPos, countNeg, countNull, buf;
    countPos = countNeg = countNull = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        scanf("%d", &buf);

        if (buf > 0) {
            ++countPos;
        } else if (buf < 0) {
            ++countNeg;
        } else {
            ++countNull;
        }
    }

    printf("%.6lf\n%.6lf\n%.6lf", 
        (double) countPos/n, (double)countNeg/n, (double)countNull/n);

    return 0;
}
