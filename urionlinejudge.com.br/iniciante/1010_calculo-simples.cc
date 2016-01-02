/**
 * Copyright (c) 2015 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>

int main(int argc, char *argv[])
{
    int qp1, qp2, c;
    double pp1, pp2;

    scanf("%d%d%lf", &c, &qp1, &pp1);
    scanf("%d%d%lf", &c, &qp2, &pp2);

    printf("VALOR A PAGAR: R$ %.2lf\n", qp1*pp1 + qp2*pp2);

    return 0;
}
