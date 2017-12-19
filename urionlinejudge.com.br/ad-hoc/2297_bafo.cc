/**
 * Copyright (c) 2017 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>
#include <string.h>

int main()
{
    int r, a, b, sumA, sumB, count = 1;

    scanf("%d", &r);

    while (r != 0) {
        sumA = sumB = 0;
        while (r--) {
            scanf("%d%d", &a, &b);
            sumA += a;
            sumB += b;
        }

        printf("Teste %d\n", count++);
        if (sumA > sumB) {
            printf("Aldo\n\n");
        } else {
            printf("Beto\n\n");
        }

        scanf("%d", &r);
    }

    return 0;
}
