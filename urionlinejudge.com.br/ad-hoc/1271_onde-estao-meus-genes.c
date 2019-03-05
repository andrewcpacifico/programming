/**
 * Copyright (c) 2019 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>

void reverse(int* arr, int* pos, int i, int j) 
{
    int aux;

    while (i < j) {
        aux = arr[i];
        arr[i] = arr[j];
        arr[j] = aux;

        pos[arr[j]] = j;
        pos[arr[i]] = i;

        i++;
        j--;
    }
}

int main()
{
    int arr[50000], pos[50000];
    int n, r, q, count = 1, i, j, x;

    scanf("%d", &n);

    while (n != 0) {
        for (i = 0; i < n; i++) {
            arr[i] = i;
            pos[i] = i;
        }

        scanf("%d", &r);
        while (r--) {
            scanf("%d%d", &i, &j);
            reverse(arr, pos, i - 1, j - 1);
        }

        printf("Genome %d\n", count++);
        scanf("%d", &q);
        while (q--) {
            scanf("%d", &x);
            printf("%d\n", (pos[x - 1]) + 1);
        }

        scanf("%d", &n);
    }

    return 0;
}
