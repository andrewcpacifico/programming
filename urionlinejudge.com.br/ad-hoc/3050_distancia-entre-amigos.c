#include <stdio.h>

#define MAX 200000

int main()
{
    long int n, i, j, dist, max, first, current;
    long int arr[MAX];

    scanf("%ld", &n);
    max = 0;

    for (i = 0; i < n; i++) {
        scanf("%ld", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            dist = arr[i] + arr[j] + (j - i);
            if (dist > max) {
                max = dist;
            }
        }
    }

    printf("%ld\n", max);

    return 0;
}
