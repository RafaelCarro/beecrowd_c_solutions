#include <stdio.h>

int main() {
    int nFunc, nHoras;
    double salHora, sal;
    scanf("%d %d %lf", &nFunc, &nHoras, &salHora);
    sal = salHora * nHoras;
    printf("NUMBER = %d\n", nFunc);
    printf("SALARY = U$ %.2lf\n", sal);
    return 0;
}