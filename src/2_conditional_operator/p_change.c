#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (d - b >= 0) {
        printf("%d %d\n", c - a, d - b);
    }
    else {
        printf("%d %d\n", (c - 1) - a, (d + 100) - b);
    }
    return 0;
}
