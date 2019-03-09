/**
 * Copyright (c) 2019 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>
#include <stdlib.h>

int pd[2000][2000];

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
    int s, n, i, j;
    item items[2000];

    scanf("%d%d", &s, &n);

    for (i = 0; i < 2000; i++) {
        for (j = 0; j < 2000; j++) {
            pd[i][j] = -1;
        }
    }

    for (i = 0; i < n; i++) {
        scanf("%d%d", &items[i].size, &items[i].value);
    }

    printf("%d\n", best(n - 1, s, items));

    return 0;
}
