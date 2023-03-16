int main() {
    int i = 1, G = 0, I = 0, E = 0, gG, gI;
    while (i == 1) {
        scanf("%d %d", &gI, &gG);
        if (gI > gG)
            I++;
        else if (gG > gI)
            G++;
        else
            E++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &i);
    }
    printf("%d grenais\n", G + I + E);
    printf("Inter:%d\n", I);
    printf("Gremio:%d\n", G);
    printf("Empates:%d\n", E);
    if (I > G)
        printf("Inter venceu mais\n");
    else
        printf("Gremio venceu mais\n");
}