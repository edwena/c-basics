#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x0, y0, x1, y1;
    scanf("%d %d %d %d", &x0, &y0, &x1, &y1);
    if ((abs(x0 - x1) <= 1) &&
        (abs(y0 - y1) <= 1)) {
            printf("YES\n");
    }
    else {
            printf("NO\n");
    }
    return 0;
}
