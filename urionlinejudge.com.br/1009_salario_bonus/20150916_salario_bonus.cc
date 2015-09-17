/**
 * Copyright (c) 2015 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>

int main(int argc, char *argv[])
{
    char name[200];
    double salary, sales;

    scanf("%s\n%lf%lf", name, &salary, &sales);
    printf("TOTAL = R$ %.2lf\n", 0.15*sales + salary);
    
    return 0;
}
