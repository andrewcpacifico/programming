/**
 * Copyright (c) 2019 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>

int main()
{
    int x, i;
    
    scanf("%d", &x);
    for (i = 1; i <=x; i+=2) {
        printf("%d\n", i);
    }

    return 0;
}
