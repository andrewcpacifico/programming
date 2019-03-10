/**
 * Copyright (c) 2019 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct sPoint {
    int x, y;
} point;

double area(point p1, point p2, point p3)
{
    return 0.5 * abs((p1.x*p2.y + p1.y*p3.x + p2.x*p3.y) - (p2.y*p3.x + p3.y*p1.x + p1.y*p2.x));
}

/**
 * Checks p4 is inside triangle p1,p2,p3
 */
int isInside(point p1, point p2, point p3, point p4)
{
    double totalArea = area(p1, p2, p3);
    double area1 = area(p1, p2, p4);
    double area2 = area(p1, p3, p4);
    double area3 = area(p2, p3, p4);

    if (totalArea == 0 || area1 == 0 || area2 == 0 || area3 == 0) {
        return 0;
    }

    return area1 + area2 + area3 == totalArea;
}

int main()
{
    int n, m, i, j, z, k, count, sum;
    point whitePoints[100], blackPoints[100];

    while (scanf("%d%d", &n, &m) != EOF) {
        for (i = 0; i < n; i++) {
            scanf("%d%d", &blackPoints[i].x, &blackPoints[i].y);
        }

        for (i = 0; i < m; i++) {
            scanf("%d%d", &whitePoints[i].x, &whitePoints[i].y);
        }

        sum = 0;
        for (i = 0; i < n; i++) {
            for (j = i + 1; j < n; j++) {
                if (j == i) {
                    continue;
                }

                for (z = j + 1; z < n; z++) {
                    if (z == i || z == j) {
                        continue;
                    }

                    count = 0;
                    for (k = 0; k < m; k++) {
                        if (isInside(blackPoints[i], blackPoints[j], blackPoints[z], whitePoints[k])) {
                            count++;
                        }
                    }
                    sum += count*count;
                }
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}
