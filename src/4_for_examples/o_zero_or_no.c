#include <stdio.h>

// Условия задания:
// Проверьте, есть ли среди данных N чисел нули.
// Вводится число N, а затем N чисел.
// Выведите YES, если среди введенных чисел есть хотя бы один нуль, или NO в противном случае.
int main() {
    int elements_count;
    scanf("%d", &elements_count);

    for (int i = 1; i <= elements_count; i++) {
        int x;
        scanf("%d", &x);
        if (x == 0) {
            printf("YES\n");
            return 0;
        }
    }

    printf("NO\n");
    return 0;
}

