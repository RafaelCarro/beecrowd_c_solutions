int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    int maiorAB = (A + B + abs(A - B)) / 2;
    int maior = (maiorAB + C + abs(maiorAB - C)) / 2;
    printf("%d eh o maior\n", maior);
    return 0;
}