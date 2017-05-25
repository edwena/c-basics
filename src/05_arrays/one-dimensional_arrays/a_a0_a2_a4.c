#include <stdio.h>

// Условия задания:
// Дан массив, состоящий из целых чисел. Нумерация элементов начинается с 0.
// Напишите программу, которая выведет элементы массива, номера которых четны (0, 2, 4...).
int main() {
    int elements_num;
    scanf("%d", &elements_num);
    int string[elements_num];
    for (int place = 0; place < elements_num; place++) {
        scanf("%d", &string[place]);
    }
    for (int i = 0; i < elements_num; i++) {
        if (i % 2 == 0) {
            printf("%d\n", *(string + i));
        }
    }
    return 0;
}
