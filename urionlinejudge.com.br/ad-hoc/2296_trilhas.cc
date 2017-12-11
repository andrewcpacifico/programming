/**
 * Copyright (c) 2017 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>
#include <string.h>

int main()
{
    int n, m, i, j, last, current, sum1, sum2, easiest = -1, easiestIndex;

    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &m);
        sum1 = sum2 = 0;

        for (j = 0; j < m; j++) {
            scanf("%d", &current);

            if (j > 0) {
               if (last < current) {
                   sum1 += (current - last);
               } else if (current < last) {
                   sum2 += (last - current);
               }
            }

            last = current;
        }

        if (easiest == -1) {
            if (sum1 < sum2) {
                easiest = sum1;
                easiestIndex = i;
            } else {
                easiest = sum2;
                easiestIndex = i;
            }
        }

        if (sum1 < easiest) {
            easiest = sum1;
            easiestIndex = i;
        }

        if (sum2 < easiest) {
            easiest = sum2;
            easiestIndex = i;
        }
        
    }

    printf("%d\n", easiestIndex);

    return 0;
}
