#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if ((a == 0) &&
        (b == 0)) {
                printf("INF\n");
    }
    else if ((a == 0) &&
             (b != 0)) {
                printf("NO\n");
    }
    else if ((a != 0) &&
             (b != 0) &&
             (b%a != 0)) {
                printf("NO\n");
    }
    else {
                printf("%d\n", -b/a);
    }
    return 0;
}
