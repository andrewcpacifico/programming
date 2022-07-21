#include <stdio.h>

int main()
{
    int h, z, l;

    scanf("%d%d%d", &h, &z, &l);

    if ((h >= z && z >= l) || (l >= z && z >= h)) {
        printf("zezinho\n");
        return 0;
    }

    if ((z >= h && h >= l) || (l >= h && h >= z)) {
        printf("huguinho\n");
        return 0;
    }

    if ((z >= l && l >= h) || (h >= l && l >= z)) {
        printf("luisinho\n");
    }

    return 0;
}
