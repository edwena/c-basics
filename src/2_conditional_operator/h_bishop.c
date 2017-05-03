#include <stdio.h>

int main()
{
    int x0, y0, x1, y1;
    scanf("%d %d %d %d", &x0, &y0, &x1, &y1);
    if (((y1 - y0) == (x1 - x0)) ||
        ((y1 - y0) == (x0 - x1))) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}
