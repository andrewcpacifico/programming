/**
 * Copyright (c) 2015 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int h, m, s;
    char d[3];

    scanf("%d:%d:%d%s", &h, &m, &s, d);

    if (strcmp(d, "PM") == 0) {
        if (h < 12) {
            h += 12;
        }
    } else {
        if (h == 12) {
            h = 0;
        }
    }

    printf("%02i:%02i:%02i", h, m, s);

    return 0;
}
