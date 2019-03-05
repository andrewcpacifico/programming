/**
 * Copyright (c) 2017 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>

int main()
{
    int h, p;
    float divisao;

    scanf("%d%d", &h, &p);
    divisao = (float) h/p;

    printf("%.2f\n", divisao);

    return 0;
}
