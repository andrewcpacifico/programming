/**
 * Copyright (c) 2017 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
    int intPart, decPart, aux;
    scanf("%d.%d", &intPart, &decPart);

    printf("NOTAS:\n");
    aux = intPart/100;
    printf("%d nota(s) de R$ 100.00\n", aux);
    intPart %= 100;

    aux = intPart/50;
    printf("%d nota(s) de R$ 50.00\n", aux);
    intPart %= 50;

    aux = intPart/20;
    printf("%d nota(s) de R$ 20.00\n", aux);
    intPart %= 20;

    aux = intPart/10;
    printf("%d nota(s) de R$ 10.00\n", aux);
    intPart %= 10;

    aux = intPart/5;
    printf("%d nota(s) de R$ 5.00\n", aux);
    intPart %= 5;

    aux = intPart/2;
    printf("%d nota(s) de R$ 2.00\n", aux);
    intPart %= 2;

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", intPart);

    aux = decPart/50;
    printf("%d moeda(s) de R$ 0.50\n", aux);
    decPart %= 50;

    aux = decPart/25;
    printf("%d moeda(s) de R$ 0.25\n", aux);
    decPart %= 25;

    aux = decPart/10;
    printf("%d moeda(s) de R$ 0.10\n", aux);
    decPart %= 10;

    aux = decPart/5;
    printf("%d moeda(s) de R$ 0.05\n", aux);
    decPart %= 5;

    printf("%d moeda(s) de R$ 0.01\n", decPart);

    return 0;
}
