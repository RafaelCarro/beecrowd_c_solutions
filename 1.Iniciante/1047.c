int main() {
    int A, B, C, D, horas, deltaT;
    scanf("%d %d %d %d", &A, &B, &C, &D);

    deltaT = (C * 60 + D) - (A * 60 + B);

    if (deltaT <= 0) {
        deltaT += 24 * 60;
    }

    horas = deltaT / 60;
    deltaT -= horas * 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, deltaT);
    return 0;
}