#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    int b = 1;
    scanf("%d", &a);
    while (pow(b, 2) <= a) {
        printf("%.0f\n", pow(b, 2));
        ++b;
    }
    return 0;
}
