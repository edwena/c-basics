#include <stdio.h>

int main()
{
    float a, b;
    int c = 1;
    scanf("%f %f", &a, &b);
    while (a < b) {
        a = a*1.1;
        ++c;
    }
    printf("%d\n", c);
    return 0;
}
