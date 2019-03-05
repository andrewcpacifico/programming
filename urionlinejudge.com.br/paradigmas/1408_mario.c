/**
 * Copyright (c) 2019 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>

#define MAX_LOCKERS 100000

int lockers[MAX_LOCKERS];

int binarySearch(int* arr, int n, int elem)
{
    int i, j, m;

    i = 0;
    j = n - 1;

    while (i <= j) {
        m = (i + j) / 2;
        if (arr[m] == elem) {
            return m;
        }

        if (arr[m] > elem) {
            j = m - 1;
        } else {
            i = m + 1;
        }
    }

    if (elem < arr[m]) {
        return -1 * m;
    }

    return -1 * (m + 1);
}

int main()
{
    int n, l, i, pos, count, min;

    while (1) {
        scanf("%d%d", &n, &l);

        if (n == 0) {
            break;
        }

        for (i = 0; i < l; i++) {
            scanf("%d", &lockers[i]);
        }

        min = 100001;
        for (i = 0; i < l; i++) {
            count = 0;

            pos = binarySearch(lockers, l, lockers[i] + n - 1);

            if (pos < 0) {
                count++;
                pos = pos * -1;
            }

            if (pos < i + n - 1) {
                count += i + n - 1 - pos;
            }

            if (count < min) {
                min = count;
            }
        }

        printf("%d\n", min);
    }

    return 0;
}
