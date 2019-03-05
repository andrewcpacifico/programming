/**
 * Copyright (c) 2019 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stu {
    char name[1000];
    char region[2];
    int cost;
} entry;

int compare(const void* st1, const void* st2) {
    entry* a, *b;
    a = (entry*) st1;
    b = (entry*) st2;

    if (a->cost > b->cost) {
        return 1;
    } else if (a->cost < b->cost) {
        return -1;
    } else if (strcmp(a->region, b->region) > 0) {
        return 1;
    } else if (strcmp(a->region, b->region) < 0) {
        return -1;
    } else if (strcmp(a->name, b->name) > 0) {
        return 1;
    } else if (strcmp(a->name, b->name) < 0) {
        return -1;
    }
}

int main()
{
    entry* students;
    int q, i;

    while (scanf("%d", &q) != EOF) {
        students = (entry*) malloc(q * sizeof(entry));

        for (i = 0; i < q; i++) {
            scanf("%s %s %d", students[i].name, students[i].region, &students[i].cost);
        }

        qsort(students, q, sizeof(entry), compare);

        for (i = 0; i < q; i++) {
            printf("%s\n", students[i].name);
        }
    }

    return 0;
}
