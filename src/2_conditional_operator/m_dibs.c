#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if ((a%4 == 0) ||
        (a == 1)) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}
