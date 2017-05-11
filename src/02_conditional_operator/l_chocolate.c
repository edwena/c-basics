#include <stdio.h>

int main()
{
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    if (((k%m == 0) &&
         (n - k/m > 0)) ||
        ((k%n == 0) &&
         (m - k/n > 0))) {
            printf("YES\n");
    }
    else {
            printf("NO\n");
    }
    return 0;
}
