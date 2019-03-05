/**
 * Copyright (c) 2019 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void insert(char (*names)[21], char* name, int size)
{
    int i;

    if (size == 1) {
        strcpy(names[0], name);
    }

    for (i = size - 1; i > 0; i--) {
        if (strcmp(names[i - 1], name) > 0) {
            strcpy(names[i], names[i - 1]);
        } else {
            break;
        }
    }

    strcpy(names[i], name);
}

int main()
{
    int n, i, good = 0, bad = 0;
    char flag[2];
    char names[100][21];
    char name[21];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%s %s", flag, name);

        insert(names, name, i + 1);

        if (flag[0] == '+') {
            good++;
        } else {
            bad++;
        }
    }

    for (i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    printf("Se comportaram: %d | Nao se comportaram: %d\n", good, bad);

    return 0;
}
