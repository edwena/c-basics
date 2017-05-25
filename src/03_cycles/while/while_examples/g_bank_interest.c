#include <stdio.h>

int main()
{
    int x, p, y;
    int e = 0;
    scanf("%d %d %d", &x, &p, &y);
    x *= 100;
    y *= 100;
    while (x < y) {
        x = x * (100 + p)/100;
        ++e;
    }
    printf("%d\n", e);
    return 0;
}
