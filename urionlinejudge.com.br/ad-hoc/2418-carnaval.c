
#include <stdio.h>

int main()
{
    float a, b, c, d, e, max, min, sum;

    scanf("%f", &a);
    max = a;
    min = a;
    sum = a;

    scanf("%f", &b);
    if (b > max) {
        max = b;
    } else if (b < min) {
        min = b;
    }
    sum += b;

    scanf("%f", &c);
    if (c > max) {
        max = c;
    } else if (c < min) {
        min = c;
    }
    sum += c;

    scanf("%f", &d);
    if (d > max) {
        max = d;
    } else if (d < min) {
        min = d;
    }
    sum += d;

    scanf("%f", &e);
    if (e > max) {
        max = e;
    } else if (e < min) {
        min = e;
    }
    sum += e;

    sum -= max;
    sum -= min;

    printf("%.1f\n", sum);

    return 0;
}
