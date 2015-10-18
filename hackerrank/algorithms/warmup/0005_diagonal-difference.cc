/**
 * Copyright (c) 2015 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n, aux, mainDiagSum, secDiagSum;

    mainDiagSum = secDiagSum = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &aux);

            if (i == j) mainDiagSum += aux;

            if (( i + j ) == ( n - 1 )) secDiagSum += aux;
        }
    }

    printf("%d", abs(mainDiagSum - secDiagSum));

    return 0;
}
