#include <stdio.h>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    while (A > B) {
        if ((A%2 == 0) && (A/2 > B)) {
                A /= 2;
                printf(":2\n");
        }
        else {
                --A;
                printf("-1\n");
        }
    }
    return 0;
}
