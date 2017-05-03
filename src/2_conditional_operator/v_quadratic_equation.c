#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float d;
    scanf(" %f %f %f", &a, &b, &c);
    d = pow(b, 2) - 4*a*c;
    if (d > 0) {
        printf("%f ", (-b - sqrt(d)) / (2*a));
        printf("%f\n", (-b + sqrt(d)) / (2*a));
    }
    else if (d == 0) {
        printf("%f\n", -b / (2*a));
    }
    else {
    }
    return 0;
}
