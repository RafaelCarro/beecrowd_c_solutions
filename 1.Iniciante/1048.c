int main() {
    double A, per, gain;
    scanf("%lf", &A);

    if (A <= 400) {
        gain = A * 0.15;
        A += gain;
        printf("Novo salario: %.2lf\n", A);
        printf("Reajuste ganho: %.2lf\n", gain);
        printf("Em percentual: 15 %\n");
    }
    else if (400 < A && A <= 800) {
        gain = A * 0.12;
        A += gain;
        printf("Novo salario: %.2lf\n", A);
        printf("Reajuste ganho: %.2lf\n", gain);
        printf("Em percentual: 12 %\n");
    }
    else if (800 < A && A <= 1200) {
        gain = A * 0.10;
        A += gain;
        printf("Novo salario: %.2lf\n", A);
        printf("Reajuste ganho: %.2lf\n", gain);
        printf("Em percentual: 10 %\n");
    }
    else if (1200 < A && A <= 2000) {
        gain = A * 0.07;
        A += gain;
        printf("Novo salario: %.2lf\n", A);
        printf("Reajuste ganho: %.2lf\n", gain);
        printf("Em percentual: 7 %\n");
    }
    else {
        gain = A * 0.04;
        A += gain;
        printf("Novo salario: %.2lf\n", A);
        printf("Reajuste ganho: %.2lf\n", gain);
        printf("Em percentual: 4 %\n");
    }
}