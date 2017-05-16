#include <stdio.h>

void calc(int lines_on_page, int total_line) {
    int page = 0;
    int current_line = 0;
    page = total_line / lines_on_page;
    if (total_line % lines_on_page != 0) {
        current_line = total_line % lines_on_page;
        page++;
    } else {
        current_line = lines_on_page;
    }
    printf("%d %d\n", page, current_line);
}

// Условия задания:
// На вход программе подаются число k — количество строк на странице и число n — номер строки в тексте.
// Выведите два числа — номер страницы, на которой будет напечатана эта строка, и номер строки на этой странице.
int main() {
    int k, n;
    scanf("%d %d", &k, &n);
    calc(k, n);
    return 0;
}
