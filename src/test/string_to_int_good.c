#include <stdio.h>
#include <stdlib.h>

int main() {
    char *string = (char*)malloc(sizeof(char) * 10000);
    scanf("%s", string);
    for (int i = 0 ; *(string + i) != '\0'; i++) {
        printf("%03d\n", *(string + i));
    }
    return 0;
}
