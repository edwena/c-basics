#include <stdio.h>

// Условия задания:
// Дан массив, состоящий из целых чисел. Нумерация элементов начинается с 0.
// Напишите программу, которая выведет элементы массива, номера которых четны (0, 2, 4...).
int main() {
    int elements_num;
    scanf("%d", &elements_num);
    int array[elements_num];

    for (int place = 0; place < elements_num; place++) {
        scanf("%d", &array[place]);
    }

    for (int i = 0; i < elements_num; i++) {
        if (i % 2 == 0) {
            // Здесь можно написать и array[i], но мне нравится больше с указателем.(
            printf("%d\n", *(array + i));
        }
    }

    return 0;
}
