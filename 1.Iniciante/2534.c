#include <stdio.h>

int bubble_sort(double arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                double c;
                c = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = c;
            }
        }
    }
}

int main() {
    int N, Q;
    while (scanf("%d", &N) != EOF) {
        scanf("%d", &Q);

        double Notas[N];
        for (int i = 0; i < N; i++) {
            scanf("%lf", &Notas[i]);
        }

        bubble_sort(Notas, N);

        for (int i = 0; i < Q; i++) {
            int pos;
            scanf("%d", &pos);
            printf("%.0lf\n", Notas[pos - 1]);
        }
    }
    return 0;
}