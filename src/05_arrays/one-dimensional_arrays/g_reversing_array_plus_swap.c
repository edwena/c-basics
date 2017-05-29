#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void read_array(int *array, int elements_num) {
    for (int place = 0; place < elements_num; place++) {
        scanf("%d", &array[place]);
    }
}

void print_array(int *array, int elements_num) {
    for (int place = 0; place < elements_num; place++) {
        printf("%d ", array[place]);
    }
    printf("\n");
}

void reverse_array(int *array, int elements_num) {
    for (int i = 0; i < elements_num / 2; i++) {
        swap(&array[i], &array[elements_num - 1 - i]);
    }
}

// Условия задания:
// Напишите программу, которая переставляет элементы массива в обратном порядке без использования дополнительного массива.
// Программа должна считать массив, поменять порядок его элементов, затем вывести результат
// (просто вывести элементы массива в обратном порядке – недостаточно!).
int main() {
    int elements_num;
    scanf("%d", &elements_num);
    int array[elements_num];
    read_array(array, elements_num);
    reverse_array(array, elements_num);
    print_array(array, elements_num);
    return 0;
}
