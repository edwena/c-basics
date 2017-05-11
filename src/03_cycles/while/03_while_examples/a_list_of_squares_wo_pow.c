#include <stdio.h>

int main()
{
    int a;
    int b = 1;
    scanf("%d", &a);
    while (b*b <= a) {
        printf("%d\n", b*b);
        ++b;
    }
    return 0;
}
