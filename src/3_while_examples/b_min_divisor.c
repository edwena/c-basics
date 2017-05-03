#include <stdio.h>

int main()
{
    int a;
    int b = 2;
    scanf("%d", &a);
    while (a % b != 0) {
        ++b;
    }
    printf("%d\n", b);
    return 0;
}
