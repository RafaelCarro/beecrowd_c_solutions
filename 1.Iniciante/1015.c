int main() {
    double A, B, C, D, dist;
    scanf("%lf %lf %lf %lf", &A, &B, &C, &D);
    dist = sqrt((C - A) * (C - A) + (D - B) * (D - B));
    printf("%.4lf\n", dist);
    return 0;
}