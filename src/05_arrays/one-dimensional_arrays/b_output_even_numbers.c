#include <stdio.h>

// Условия задания:
// Дан массив, состоящий из целых чисел.
// Напишите программу, которая выводит те элементы массива, которые являются чётными числами.
int main() {
    int elements_num;
    scanf("%d", &elements_num);
    int array[elements_num];

    for (int place = 0; place < elements_num; place++) {
        scanf("%d", &array[place]);
    }

    for (int i = 0; i < elements_num; i++) {
        // Как и в предыдущей задаче, можно array[i].
        // Дальше буду писать без указателя, чтобы лучше читалось.(
        if (*(array + i) % 2 == 0) {
            printf("%d\n", *(array + i));
        }
    }

    return 0;
}
