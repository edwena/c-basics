#include <stdio.h>

int main()
{
    int a;
    int b,c,d;
    scanf("%d", &a);
    b = (((a/60)%86400)/60)%24;
    c = ((a/60)%86400)%60;
    d = (a%60)%86400;
    printf("%d:%.2d:%.2d", b,c,d);
    return 0;
}
