#include <stdio.h>
#include <stdbool.h>
#define MAX 16

bool is_end_symbol(char c) {
    return c == '\n' || c == '\0' || c == '.';
}

int find_the_dot(int index_to_start, char *string) {
    int dot_finder = index_to_start;
    while (!is_end_symbol(string[dot_finder])) {
        dot_finder++;
    }
    return dot_finder;
}

int substring_to_int(int from, int to, char *string) {
    int cur_num = 0;
    for (int i = from; i <= to; i++) {
        cur_num *= 10;
        cur_num += string[i] - '0';
    }
    return cur_num;
}

bool check_if_IP(char *string) {
    int from = 0;
    int to = 0;
    for (int i = 0; i < 4; i++) {
        to = find_the_dot(from, string);
        if (from != to && substring_to_int(from, to - 1, string) <= 255) {
            from = to + 1;
        } else {
            return false;
        }
    }
    return true;
}

// Условие задания:
// Напишите программу, которая определяет, является ли заданная строка правильным IP-адресом.
// На вход программе подается строка длиной не более 15 символов, которая включает цифры и ровно три точки.
// Если строка является правильным IP-адресом, необходимо вывести 1, иначе 0.
int main() {
    char string[MAX];
    fgets(string, MAX, stdin);
    printf(check_if_IP(string) ? "1\n" : "0\n");
    return 0;
}
