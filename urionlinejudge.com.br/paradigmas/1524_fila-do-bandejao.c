/**
 * Copyright (c) 2019 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
    int* x = (int*) a;
    int* y = (int*) b;

    return *y - *x;
}

/**
 * The main idea here is to build the groups in a way that the greatest gaps 
 * between people stay between the groups and not be considered to the groups 
 * sizes.
 *
 * Another important concept is that the distance between the two most distant 
 * people in a group is equal to the sum of the distances between every person 
 * in the group and the previous one (excluding the first).
 */
int main()
{
    int n, k, i, j, sum;
    int people[1000], diffs[1000];

    while (scanf("%d%d", &n, &k) != EOF) {
        people[0] = 0;
        for (i = 1; i < n; i++) {
            scanf("%d", &people[i]);
            diffs[i - 1] = people[i] - people[i - 1];
        }

        qsort(diffs, n - 1, sizeof(int), compare);

        sum = 0;
        for (i = k - 1; i < n - 1; i++) {
            sum += diffs[i];
        }
        printf("%d\n", sum);
    }

    return 0;
}
