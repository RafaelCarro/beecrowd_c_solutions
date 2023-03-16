int main() {
    char NOME[10];
    double A, B, sal;
    scanf("%s %lf %lf", NOME, &A, &B);
    sal = A + (B * 0.15);
    printf("TOTAL = R$ %.2lf\n", sal);
    return 0;
}