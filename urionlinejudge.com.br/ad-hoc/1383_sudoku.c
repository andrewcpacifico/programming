/**
 * Copyright (c) 2019 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>

int getQuad(int i, int j) {
    if (i < 3) {
        if (j < 3) {
            return 0;
        } else if (j < 6) {
            return 1;
        } else {
            return 2;
        }
    } else if (i < 6) {
        if (j < 3) {
            return 3;
        } else if (j < 6) {
            return 4;
        } else {
            return 5;
        }
    } else {
        if (j < 3) {
            return 6;
        } else if (j < 6) {
            return 7;
        } else {
            return 8;
        }
    }
}

int main()
{
    int mat[9][9], columns[9][9], rows[9][9], quads[9][9];
    int i, j, n, k = 1, c, flag, nQuad;

    scanf("%d", &n);

    while (n--) {
        flag = 1;

        for (i = 0; i < 9; i++) {
            for (j = 0; j < 9; j++) {
                columns[i][j] = 0;
                rows[i][j] = 0;
                quads[i][j] = 0;
            }
        }


        for (i = 0; i < 9; i++) {
            for (j = 0; j < 9; j++) {
                scanf("%d", &c);

                nQuad = getQuad(i, j);

                if (rows[i][c - 1]) {
                    flag = 0;
                }

                if (columns[j][c - 1]) {
                    flag = 0;
                }

                if (quads[nQuad][c - 1]) {
                    flag = 0;
                }

                rows[i][c - 1] = 1;
                columns[j][c - 1] = 1;
                quads[nQuad][c - 1] = 1;
            }
        }

        printf("Instancia %d\n", k++);
        if (flag) {
            printf("SIM\n\n");
        } else {
            printf("NAO\n\n");
        }
    }

    return 0;
}
