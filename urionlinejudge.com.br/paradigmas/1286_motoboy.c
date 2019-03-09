/**
 * Copyright (c) 2019 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>
#include <stdlib.h>

#define MAX_CAP 30
#define MAX_ITEMS 20

int pd[MAX_ITEMS][MAX_CAP];

typedef struct sItem {
    int size, value;
} item;

int max(int a, int b) {
    if (a >= b) return a;
    return b;
}

int best(int n, int cap, item* items)
{
    int value1, value2;

    if (n < 0) return 0;

    if (pd[n][cap] != -1) {
        return pd[n][cap];
    }

    if (cap - items[n].size >= 0) {
        value1 = items[n].value + best(n - 1, cap - items[n].size, items);
    } else {
        value1 = 0;
    }

    value2 = best(n - 1, cap, items);

    pd[n][cap] = max(value1, value2);
    return pd[n][cap];
}

int main()
{
    int n, cap, i, j;
    item items[MAX_ITEMS];

    while (scanf("%d", &n) && n != 0) {
        scanf("%d", &cap);

        for (i = 0; i < MAX_ITEMS; i++) {
            for (j = 0; j < MAX_CAP; j++) {
                pd[i][j] = -1;
            }
        }

        for (i = 0; i < n; i++) {
            scanf("%d%d", &items[i].value, &items[i].size);
        }

        printf("%d min.\n", best(n - 1, cap, items));
    }

    return 0;
}
