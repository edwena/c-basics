#include <stdio.h>

int main()
{
    int a;
    int b = 1;
    scanf("%d", &a);
    while (b < a) {
        b = b*2;
    }
    if (a % b == 0) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}
