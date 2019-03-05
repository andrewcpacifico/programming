/**
 * Copyright (c) 2017 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>

int main()
{
    int i, n, l;
    int cont2, cont3, cont4, cont5;

    cont2 = cont3 = cont4 = cont5 = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &l);

        if (l % 2 == 0) {
            cont2++;
        }

        if (l % 3 == 0) {
            cont3++;
        }

        if (l % 4 == 0) {
            cont4++;
        }

        if (l % 5 == 0) {
            cont5++;
        }
    }

    printf("%d Multiplo(s) de 2\n", cont2);
    printf("%d Multiplo(s) de 3\n", cont3);
    printf("%d Multiplo(s) de 4\n", cont4);
    printf("%d Multiplo(s) de 5\n", cont5);

    return 0;
}
