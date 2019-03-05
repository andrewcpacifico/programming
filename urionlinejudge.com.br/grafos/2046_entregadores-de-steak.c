/**
 * Copyright (c) 2019 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct pair {
    int x, y;
} coords;


int main()
{
    int m, n, k, l, x, y, count = 1, i, min, dist;
    coords points[100000];
    coords best;

    while (1) {
        scanf("%d%d", &m, &n);

        if (m == 0) {
            break;
        }

        if (count > 1) {
            printf("\n");
        }

        printf("Instancia %d\n", count++);

        scanf("%d", &k);
        for (i = 0; i < k; i++) {
            scanf("%d%d", &x, &y);
            points[i].x = x;
            points[i].y = y;
        }

        scanf("%d", &l);
        while (l--) {
            scanf("%d%d", &x, &y);
            min = 3000;

            for (i = 0; i < k; i++) {
                dist = abs(points[i].x - x) + abs(points[i].y - y);

                if (dist < min) {
                    min = dist;
                    best.x = points[i].x;
                    best.y = points[i].y;
                } else if (dist == min) {
                    if (points[i].x < best.x) {
                        best.x = points[i].x;
                        best.y = points[i].y;
                    } else if (points[i].x == best.x && points[i].y < best.y) {
                        best.x = points[i].x;
                        best.y = points[i].y;
                    }
                }
            }

            printf("%d %d\n", best.x, best.y);
        }
    }

    return 0;
}
