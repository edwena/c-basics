#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a >= 11 &&
        a <= 14) {
        printf("%d korov", a);
    }
    else if (a % 10 == 1) {
             printf("%d korova", a);
    }
    else if ((a % 10 >= 2) &&
             (a % 10 <= 4)){
             printf("%d korovy", a);
    }
    else {
        printf("%d korov", a);
    }
    return 0;
}
