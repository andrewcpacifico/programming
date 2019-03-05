/**
 * Copyright (c) 2019 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>
#include <math.h>

int removeSeven(int n) {
    int x = 0, d, acc = 0;

    while (n > 10) {
        d = n%10;

        if (d != 7) {
            x = (d * pow(10, acc)) + x;
        }

        acc++;
        n /= 10;
    }

    if (n != 7) {
        x = (n * pow(10, acc)) + x;
    }

    return x;
}

int main()
{
    int a, b, r;
    char op[2];

    scanf("%d%s%d", &a, op, &b);

    a = removeSeven(a);
    b = removeSeven(b);

    if (op[0] == '+') {
        r = removeSeven(a + b);
    } else {
        r = removeSeven(a * b);
    }

    printf("%d\n", r);

    return 0;
}
