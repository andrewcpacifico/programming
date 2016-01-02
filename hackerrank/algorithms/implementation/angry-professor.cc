/**
 * Copyright (c) 2015 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n, k, t, a, count;

    scanf("%d", &t);

    while (t--) {
        scanf("%d%d", &n, &k);

        count = 0;
        while (n--) {
            scanf("%d", &a);

            if (a <= 0) {
                ++count;
            }
        }

        if (count < k) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
