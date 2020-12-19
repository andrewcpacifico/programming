#include <stdio.h>

#define MAX 100

int main()
{
    int n, aux, i, reverse, count, max;
    char line[MAX + 1];

    scanf("%d", &n);

    count = max = reverse = 0;

    aux = n;
    while (aux--) {
        scanf("%s", line);

        if (!reverse) {
            for (i = 0; i < n; i++) {
                if (line[i] == 'o') {
                    count++;
                } else if (line[i] == 'A') {
                    count = 0;
                }

                if (count > max) {
                    max = count;
                }
            }
        } else {
            for (i = n - 1; i >= 0; i--) {
                if (line[i] == 'o') {
                    count++;
                } else if (line[i] == 'A') {
                    count = 0;
                }

                if (count > max) {
                    max = count;
                }
            }
        }

        reverse = !reverse;
    }

    printf("%d\n", max);

    return 0;
}
