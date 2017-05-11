#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    printf("%d %d", ((a/60)%1440)%24, (a%60)%1440);
    return 0;
}
