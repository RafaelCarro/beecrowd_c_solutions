int main() {
    int I, F, D;
    scanf("%d %d", &I, &F);

    if (I >= F) {
        D = F - I + 24;
    }
    else {
        D = F - I;
    }

    printf("O JOGO DUROU %d HORA(S)\n", D);
}