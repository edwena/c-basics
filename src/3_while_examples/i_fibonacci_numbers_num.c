#include <stdio.h>

int main()
{
    int A;
    scanf("%d", &A);
    int novoe_chislo = 0;
    int prediduschee_chislo = 1;
    int ochen_prediduschee_chislo = 0;
    int i = 1;
    while ( novoe_chislo < A) {
        novoe_chislo = ochen_prediduschee_chislo + prediduschee_chislo;
        ochen_prediduschee_chislo = prediduschee_chislo;
        prediduschee_chislo = novoe_chislo;
        ++i;
    }
    if (novoe_chislo == A) {
        printf("%d\n", i);
    }
    else {
        printf("-1\n");
    }
    return 0;
}

