int main() {
    int I[3], O[3];
    scanf("%d %d %d", &I[0], &I[1], &I[2]);

    if (I[0] >= I[1] && I[0] >= I[2]) {
        O[2] = I[0];
        if (I[1] >= I[2]) {
            O[1] = I[1];
            O[0] = I[2];
        }
        else {
            O[1] = I[2];
            O[0] = I[1];
        }
    }

    else if (I[1] >= I[0] && I[1] >= I[2]) {
        O[2] = I[1];
        if (I[0] >= I[2]) {
            O[1] = I[0];
            O[0] = I[2];
        }
        else {
            O[1] = I[2];
            O[0] = I[0];
        }
    }

    else {
        O[2] = I[2];
        if (I[0] >= I[1]) {
            O[1] = I[0];
            O[0] = I[1];
        }
        else {
            O[1] = I[1];
            O[0] = I[0];
        }
    }

    printf("%d\n%d\n%d\n\n", O[0], O[1], O[2]);
    printf("%d\n%d\n%d\n", I[0], I[1], I[2]);
}