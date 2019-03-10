/**
 * Copyright (c) 2019 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>
#include <stdlib.h>

#define MAX_CAP 50
#define MAX_ITEMS 100

typedef struct sItem {
    int size, value;
} item;

typedef struct sTuple {
    int count, value, size;
} tuple;

tuple* pd[MAX_ITEMS][MAX_CAP];

tuple* max(tuple* a, tuple* b)
{
    if (a->value >= b->value) return a;
    return b;
}

tuple* best(int n, int cap, item* items)
{
    tuple* value1 = (tuple*) malloc(sizeof(tuple));
    tuple* value2 = (tuple*) malloc(sizeof(tuple));
    tuple* rec;

    value1->count = 0;
    value1->value = 0;
    value1->size = 0;

    if (n < 0 || cap < 1) return value1;

    if (pd[n][cap] != NULL) {
        return pd[n][cap];
    }

    if (cap - items[n].size >= 0) {
        rec = best(n - 1, cap - items[n].size, items);
        value1->count = rec->count + 1;
        value1->value = rec->value + items[n].value;
        value1->size = rec->size + items[n].size;
    }

    value2 = best(n - 1, cap, items);

    pd[n][cap] = max(value1, value2);

    return pd[n][cap];
}

int main()
{
    int n, pac, i, j;
    item items[MAX_ITEMS];
    tuple* res;

    scanf("%d", &n);

    while (n--) {
        for (i = 0; i < MAX_ITEMS; i++) {
            for (j = 0; j < MAX_CAP; j++) {
                pd[i][j] = NULL;
            }
        }

        scanf("%d", &pac);
        for (i = 0; i < pac; i++) {
            scanf("%d%d", &items[i].value, &items[i].size);
        }

        res = best(pac - 1, 50, items);
        printf("%d brinquedos\n", res->value);
        printf("Peso: %d kg\n", res->size);
        printf("sobra(m) %d pacote(s)\n\n", pac - res->count);
    }

    return 0;
}
