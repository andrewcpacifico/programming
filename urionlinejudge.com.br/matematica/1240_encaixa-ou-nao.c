/**
 * Copyright (c) 2019 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>

int main()
{
    int n;
    int a, b;
  
    scanf("%d", &n);
  
    while (n--) {
        scanf("%d%d", &a, &b);

        if (b > a) {
            printf("nao encaixa\n");
        } else if (b == a) {
            printf("encaixa\n");
        } else {
            while (b >= 10) {
                if (a%10 != b%10) {
                    break;
                }
                a /= 10;
                b /= 10;
            }

            if (b == a%10) {
                printf("encaixa\n");
            } else {
                printf("nao encaixa\n");
            }
        }
    }
  
    return 0;
}
