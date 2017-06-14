#include <stdio.h>
#define MAX 1000


void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

char* reverse_substring(char *string, int from, int to) {
    for (int i = 0; i < (to - (from - 1)) / 2; i++) {
        swap(&string[from + i], &string[to - i]);
    }
    return string;
}

// Условие задания:
// Дана строка S, в которой выделили подстроку, состоящую из символов с i-го по j-й включительно (символы строки S нумеруются с единицы)
// и поменяли местами i-й символ с j-м, (i+1)-й с (j-1)-м и так далее (конвертировали подстроку).
// Выведите строку S после внесенных изменений.
// В первой строке входного файла содержится строка S, длиной не более 1000 символов, во второй – числа i и  j (i ≤  j).
int main() {
    char string[MAX];
    fgets(string, MAX, stdin);
    int i, j;
    scanf("%d%d", &i, &j);
    printf("%s\n", reverse_substring(string, i - 1, j - 1));
    return 0;
}
