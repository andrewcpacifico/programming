/**
 * Copyright (c) 2017 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>
#include <string.h>

int main()
{
    int n, m, i, j, max = 0, aux;
    int rowSum[100], colSum[100];
    scanf("%d%d", &n, &m);

    memset(rowSum, 0, sizeof(rowSum));
    memset(colSum, 0, sizeof(colSum));

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &aux);
            rowSum[i] += aux;
            colSum[j] += aux;

            if (rowSum[i] > max) {
                max = rowSum[i];
            }

            if (colSum[j] > max) {
                max = colSum[j];
            }
        }
    }

    printf("%d\n", max);

    return 0;
}
