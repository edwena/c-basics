#include <stdio.h>
#include <stdlib.h>

// Условия задания:
// Перевести строку в код.
int main() {
    char *string = (char*)malloc(sizeof(char) * 10000);
    scanf("%s", string);
    for ( ; string[0] != '\0'; string++) {
        printf("%03d\n", string[0]);
    }
    return 0;
}
