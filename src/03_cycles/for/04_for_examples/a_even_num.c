#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int i = a;
    for (i = (i+1)/2*2; i <= b; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
