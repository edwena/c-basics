#include <stdio.h>

int main()
{
    int a;
    int b, c, d, e;
    scanf("%d", &a);
    b=a/1000;
    c=(a%1000)/100;
    d=(a%100)/10;
    e=(a%10)/1;
    printf("%d\n", 1+(b*10+c)-(e*10+d));
    return 0;
}
