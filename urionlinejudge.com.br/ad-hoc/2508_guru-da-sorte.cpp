/**
 * Copyright (c) 2019 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    string n;
    int i, sum, code, aux;

    while (getline(cin, n)) {
        sum = 0;
        for (i = 0; i < n.size(); i++) {
            if (n[i] > 90) {
                n[i] -= 32;
            }

            if (n[i] == ' ') {
                continue;
            }

            code = ((n[i] - 64) / 10) + ((n[i] - 64) % 10);
            sum += code;
        }

        while (sum > 9) {
            aux = 0;
            while (sum > 9) {
                aux += sum % 10;
                sum /= 10;
            }
            aux += sum;
            sum = aux;
        }

        printf("%d\n", sum);
    }
    
    return 0;
}
