#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if  ((a >= 8) ||
         (a == 3) ||
         (a == 5) ||
         (a == 6)) {
            printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}
