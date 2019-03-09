/**
 * Copyright (c) 2019 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>
#include <math.h>

int main()
{
    int ev1, ev2, at, d, n1, n2;
    double p, q, prob;

    while (scanf("%d%d%d%d", &ev1, &ev2, &at, &d) && ev1*ev2*at*d != 0) {
        p = (float) at / 6.0;
        q = 1 - p;
        n1 = (float) ev1 / d;
        if (ev1 % d > 0) {
            n1++;
        }
        n2 = (float) ev2 / d;
        if (ev2 % d > 0) {
            n2++;
        }

        if (p == 0.5) {
            prob = (float) n1 / (n1 + n2);
            printf("%.1lf\n", 100 * prob);
        } else {
            printf("%.1lf\n", 100 * ((1 - pow((q / p), n1)) /  (1 - pow((q / p), n1 + n2))));
        }
    }

    return 0;
}
