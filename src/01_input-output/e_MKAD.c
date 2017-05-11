#include <stdio.h>
int main()
{
    int v;
    int t;
    int s;
    scanf("%d", &v);
    scanf("%d", &t);
    s = v*t;
    printf("%d", (109+s%109)%109);
    return 0;
    }
