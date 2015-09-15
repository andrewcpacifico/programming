/**
 * Copyright (c) 2015 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>

int main(int argc, char *argv[])
{
    int num, hours;
    double hPrice;

    scanf("%d%d%lf", &num, &hours, &hPrice);
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", num, hours*hPrice);
    
    return 0;
}
