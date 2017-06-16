/**
 * Copyright (c) 2017 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char l;
    int count = 1;

    while (fscanf(stdin, "%c", &l) != EOF) {
        count += (l >= 65 && l <= 90);
    }
    printf("%d", count);

    return 0;
}
