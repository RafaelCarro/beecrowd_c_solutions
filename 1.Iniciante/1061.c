int main() {
    int Di, Hi, Mi, Si, Df, Hf, Mf, Sf, D = 0, H = 0, M = 0, S;
    char ts, dia[4];
    scanf("%s %d %d %c %d %c %d", dia, &Di, &Hi, &ts, &Mi, &ts, &Si);
    scanf("%s %d %d %c %d %c %d", dia, &Df, &Hf, &ts, &Mf, &ts, &Sf);

    S = Sf - Si;
    if (S < 0) {
        S += 60;
        M--;
    }

    M += Mf - Mi;
    if (M < 0) {
        M = 60 + M;
        H--;
    }

    H += Hf - Hi;
    if (H < 0) {
        H += 24;
        D--;
    }

    D += Df - Di;

    printf("%d dia(s)\n", D);
    printf("%d hora(s)\n", H);
    printf("%d minuto(s)\n", M);
    printf("%d segundo(s)\n", S);
}