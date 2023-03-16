int main() {
    int A, B;
    double dist, q;
    scanf("%d %d", &A, &B);
    dist = A * B;
    q = dist / 12;
    printf("%.3lf\n", q);
    return 0;
}