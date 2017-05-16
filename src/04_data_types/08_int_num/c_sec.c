#include <stdio.h>

void time(int sec) {
    int hours = 0;
    int min = 0;
    hours = sec / 3600;
    min = sec / 60 - hours * 60;
    printf("It is %d hours %d minutes.\n", hours, min);
}

// Условия задания:
// На вход программе подается целое число k (0 <= k <= 86399).
// Выведите на экран фразу: It is ... hours ... minutes.
// Вместо многоточий программа должна выводить значения h и m, отделяя их от слов ровно одним пробелом.
int main() {
    int k;
    scanf("%d", &k);
    time(k);
    return 0;
}
