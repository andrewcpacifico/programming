/**
 * Copyright (c) 2019 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>

int main()
{
    int n, id, best = -1;
    float grade, bestGrade = 0.0;

    scanf("%d", &n);
    while (n--) {
        scanf("%d%f", &id, &grade);

        if (grade >= 8 && grade > bestGrade) {
            bestGrade = grade;
            best = id;
        }
    }

    if (best != -1) {
        printf("%d\n", best);
    } else {
        printf("Minimum note not reached\n");
    }

    return 0;
}
