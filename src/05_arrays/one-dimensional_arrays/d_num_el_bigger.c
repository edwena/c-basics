#include <stdio.h>

// Условия задания:
// Дан массив, состоящий из целых чисел.
// Напишите программу, которая подсчитает количество элементов массива,
// больших предыдущего (элемента с предыдущим номером).
int main() {
    int elements_num;
    scanf("%d", &elements_num);
    int array[elements_num];

    for (int place = 0; place < elements_num; place++) {
        scanf("%d", &array[place]);
    }

    int previous_num = array[0];
    int bigger_num = 0;

    for (int i = 1; i < elements_num; i++) {
        if (array[i] > previous_num) {
            bigger_num++;
        }
        previous_num = array[i];
    }

    printf("%d\n", bigger_num);

    return 0;
}
