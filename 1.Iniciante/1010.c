int main() {
    int cA, nA, cB, nB;
    double vA, vB, v;
    scanf("%i %i %lf", &cA, &nA, &vA);
    scanf("%i %i %lf", &cB, &nB, &vB);
    v = (nA * vA) + (nB * vB);
    printf("VALOR A PAGAR: R$ %.2lf\n", v);
    return 0;
}