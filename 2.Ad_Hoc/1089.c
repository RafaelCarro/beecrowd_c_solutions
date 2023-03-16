#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    while (N != 0) {
        int V[N], P = 0;
        for (int i = 0; i < N; i++)
            scanf("%d", &V[i]);
        for (int i = 1; i < N - 1; i++) {
            if (V[i - 1] < V[i] && V[i + 1] < V[i])
                P++;
            else if (V[i - 1] > V[i] && V[i + 1] > V[i])
                P++;
        }
        if (V[N - 1] < V[0] && V[1] < V[0])
            P++;
        else if (V[N - 1] > V[0] && V[1] > V[0])
            P++;
        if (V[N - 2] < V[N - 1] && V[0] < V[N - 1] && N > 2)
            P++;
        else if (V[N - 2] > V[N - 1] && V[0] > V[N - 1] && N > 2)
            P++;
        else if (N <= 2 && (V[0] > V[1] || V[0] < V[1]))
            P++;
        printf("%d\n", P);
        scanf("%d", &N);
    }
    return 0;
}