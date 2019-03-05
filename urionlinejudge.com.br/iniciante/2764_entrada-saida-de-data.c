/**
 * Copyright (c) 2019 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>

int main()
{
    int d, m, a;
    scanf("%d/%d/%d", &d, &m, &a);
    printf("%02d/%02d/%02d\n", m, d, a);
    printf("%02d/%02d/%02d\n", a, m, d);
    printf("%02d-%02d-%02d\n", d, m, a);

    return 0;
}
