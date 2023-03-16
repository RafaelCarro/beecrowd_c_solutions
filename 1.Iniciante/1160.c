int main() {
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        int PA, PB, t = 0, p = 1;
        double G1, G2;
        scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);
        while (PA <= PB) {
            PA = PA * (1 + (G1 / 100));
            PB = PB * (1 + (G2 / 100));
            t++;
            p++;
            if (t > 100) {
                break;
            }
        }
        if (t > 100) {
            printf("Mais de 1 seculo.\n");
        }
        else {
            printf("%d anos.\n", t);
        }
    }
    return 0;
}