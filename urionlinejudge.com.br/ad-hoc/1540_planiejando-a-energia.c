#include <stdio.h>

int main()
{
  int n;
  long long unsigned int a, b, c, d;
  long long unsigned int result;

  scanf("%d", &n);

  while (n--) {
    scanf("%llu%llu%llu%llu", &a, &b, &c, &d);

    result = ((d - b) * 100) / (c - a);
    printf("%llu,%02llu\n", result / 100, result % 100);
  }

  return 0;
}
