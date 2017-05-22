#include <stdio.h>

int main() {
    char string[1000];
    scanf("%s", string);
    for (int i = 0 ; string[i] != '\0'; i++) {
        printf("%03d\n", string[i]);
    }
    return 0;
}
