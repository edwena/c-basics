#include <stdio.h>

void read_array(int *array, int elements_num) {
    for (int place = 0; place < elements_num; place++) {
        scanf("%d", &array[place]);
    }
}

int search_for_biggest(int *array, int elements_num) {
    int the_biggest_num = array[0];
    for (int i = 1; i < elements_num; i++) {
        if (array[i] > the_biggest_num) {
            the_biggest_num = array[i];
        }
    }
    return the_biggest_num;
}

// Условия задания:
// Вводится массив, состоящий из целых чисел. Найти наибольшее среди них.
int main() {
    int elements_num;
    scanf("%d", &elements_num);
    int array[elements_num];
    read_array(array, elements_num);
    printf("%d\n", search_for_biggest(array, elements_num));
    return 0;
}
