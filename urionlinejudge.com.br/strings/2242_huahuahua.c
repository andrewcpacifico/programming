/**
 * Copyright (c) 2019 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>
#include <string.h>

int main()
{
    char risada[51], cleaned[51];
    int i, j;

    scanf("%s", risada);
    j = 0;
    for (i = 0; i < strlen(risada); i++) {
        if (
            risada[i] == 'a' ||
            risada[i] == 'e' ||
            risada[i] == 'i' ||
            risada[i] == 'o' ||
            risada[i] == 'u'
        ) {
            cleaned[j++] = risada[i];
        }
    }
    cleaned[j] = '\0';

    i = 0;
    j = strlen(cleaned) - 1;
    while (i < j) {
        if (cleaned[i] != cleaned[j]) {
            break;
        }
        i++;
        j--;
    }

    if (i >= j) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}
