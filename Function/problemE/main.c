#include <stdio.h>

int hitungTotal(int arr[], int N) {
    if (N == 0) {
        return 0;
    }
    return arr[N-1] + hitungTotal(arr, N-1);
}

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N);
        int A[N];  // Array untuk menyimpan jumlah pohon per hari
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }
        int total = hitungTotal(A, N);
        printf("Case #%d: %d\n", t, total);
    }
    return 0;
}
