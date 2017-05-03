#include <stdio.h>

int main()
{
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d", 1+(a%b)*(b%a));
    return 0;
}
