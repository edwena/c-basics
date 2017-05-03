#include <stdio.h>

int main()
{
    int x;
    int y;
    int a, b, c, d;
    int z;
    scanf("%d", &x);
    scanf("%d", &y);
    a=x/1000;
    b=(x%1000)/100;
    c=(x%100)/10;
    d=(x%10)/1;
    z=(a*10+b)-(d*10+c);
    if (((z == 0) &&
        (y == 1)) ||
        ((z != 0) &&
        (y != 1))){
            printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
