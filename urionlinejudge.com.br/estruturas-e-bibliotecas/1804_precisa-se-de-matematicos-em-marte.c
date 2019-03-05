/**
 * Copyright (c) 2019 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>

#define MAX 100001
#define LSB(i) ((i) & -(i)) // zeroes all the bits except the least significant one

int BIT[MAX];
int values[MAX];

int sum(int i) // Returns the sum from index 1 to i
{
    int sum = 0;
    while (i > 0) 
        sum += BIT[i], i -= LSB(i);
    return sum;
}
 
void add(int i, int k, int size) // Adds k to element with index i
{
    while (i <= size) {
        BIT[i] += k; 
        i += LSB(i);
    }
}

void sub(int i, int k, int size) // Adds k to element with index i
{
    while (i <= size) {
        BIT[i] -= k; 
        i += LSB(i);
    }
}

int main()
{
    int n, i;
    char op[2];

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &values[i]);
        add(i + 1, values[i], n);
    }

    while (scanf("%s%d", op, &i) != EOF) {
        if (op[0] == 'a') {
            sub(i, values[i - 1], n);
        } else {
            printf("%d\n", sum(i) - values[i - 1]);
        }
    }

    return 0;
}
