#include <stdio.h>

int main()
{
    int a;
    int b = 1;
    int c = 0;
    scanf("%d", &a);
    while (a > b) {
        b = b*2;
        ++c;
    }
    printf("%d\n", c);
    return 0;
}
