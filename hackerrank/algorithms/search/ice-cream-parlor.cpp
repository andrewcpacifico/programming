/**
 * Copyright (c) 2017 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>
#include <stdlib.h>

#include <iostream>
#include <map>

using namespace std;

int main(int argc, char *argv[])
{
    int t, m, n, c, i, s, j;
    map<int, int> costs;

    scanf("%d", &t);

    while (t--) {
        scanf("%d%d", &m, &n);

        for (i = 1; i <= n; ++i) {
            scanf("%d", &c);

            if (costs.find(m - c) != costs.end()) {
                s = costs[m - c];
                j = i;
            } else {
                costs[c] = i;
            }
        }

        printf("%d %d\n", s, j);
        costs.clear();
    }

    return 0;
}
