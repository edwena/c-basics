#include <stdio.h>
#include <math.h>

int main() {

    // ������ ������� ����������
    int first_part_for_numerator = 0;
    int second_part_for_numenator_without_s = 0;
    int for_counting_s = 0;
    int i = 0;

    // ��������� ��� �����
    // ������������ �������������� �����
    while (1) {
        int N;
        scanf("%d", &N);
        if (N == 0) {
            break;
        } else {
            first_part_for_numerator += N * N;
            second_part_for_numenator_without_s += 2 * N;
            for_counting_s += N;
            i++;
        }
    }

    //������� ������� ������� ��������������
    double s = 0;
    s = for_counting_s * 1.0 / i;

    //��������� ��� ������������ ����������
    double numenator = 0;
    numenator = first_part_for_numerator + i * (s * s) - s * second_part_for_numenator_without_s;

    //� ������ �������� �����
    double the_standard_deviation = 0;
    the_standard_deviation = sqrt(numenator / (i - 1));

    printf("%f\n", the_standard_deviation);
    return 0;
}
