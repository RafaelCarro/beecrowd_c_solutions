int main() {
    double A, B, C, D, E, med, medE;
    scanf("%lf %lf %lf %lf", &A, &B, &C, &D);

    med = (A * 2 + B * 3 + C * 4 + D) / 10;

    if (med >= 7) {
        printf("Media: %.1lf\n", med);
        printf("Aluno aprovado.\n");
    }
    else if (med < 5) {
        printf("Media: %.1lf\n", med);
        printf("Aluno reprovado.\n");
    }
    else {
        scanf("%lf", &E);
        medE = (med + E) / 2;
        if (med >= 5) {
            printf("Media: %.1lf\n", med);
            printf("Aluno em exame.\n");
            printf("Nota do exame: %.1lf\n", E);
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n", medE);
        }
        else {
            printf("Media: %.1lf\n", med);
            printf("Aluno em exame.\n");
            printf("Nota do exame: %.1lf\n", E);
            printf("Aluno reprovado.\n");
            printf("Media final: %.1lf\n", medE);
        }
    }
}