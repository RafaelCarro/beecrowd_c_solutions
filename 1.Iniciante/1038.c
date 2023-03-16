int main() {
    int cod;
    double qtd;
    scanf("%d %lf", &cod, &qtd);
    switch (cod) {
    case 1:
        printf("Total: R$ %.2lf\n", 4 * qtd);
        break;
    case 2:
        printf("Total: R$ %.2lf\n", 4.5 * qtd);
        break;
    case 3:
        printf("Total: R$ %.2lf\n", 5 * qtd);
        break;
    case 4:
        printf("Total: R$ %.2lf\n", 2 * qtd);
        break;
    case 5:
        printf("Total: R$ %.2lf\n", 1.5 * qtd);
        break;
    }
    return 0;
}