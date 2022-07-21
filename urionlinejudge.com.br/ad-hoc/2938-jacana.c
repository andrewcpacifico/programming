#include <stdio.h>

int main()
{
    int p, c, n, i, v, count;

    scanf("%d%d%d", &p, &c, &n);

    count = 0;
    for (i = 0; i < n; ++i) {
        scanf("%d", &v);

        if (p > v) break;

        if (p + c > v) {
            c -= (p + c - v);
            if (i > 0) count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
