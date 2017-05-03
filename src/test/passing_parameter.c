#include <stdio.h>

void asdf(int a) {
    printf("%d\n", a);
    a = 5;
    printf("%d\n", a);
}

int main() {
    int b = 2;
    printf("%d\n", b);
    asdf(b);
    printf("%d\n", b);

    printf("\n");

    int a = 2;
    printf("%d\n", a);
    asdf(a);
    printf("%d\n", a);

    return 0;
}
