#include <stdio.h>

int main()
{
    int n, x;
    int a = 0;
    int b = 1;
    int c = 1;
    scanf("%d", &n);
    if (n > 1) {
        while (c < n) {
            x = a + b;
            a = b;
            b = x;
            ++c;
        }
        printf("%d\n", x);
    }
    else if (n == 1) {
        printf("1\n");
    }
    else {
        printf("0\n");
    }
    return 0;
}

