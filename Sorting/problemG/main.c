#include <stdio.h>

void bubbleSort(int arr[], int n, int x, int *time) {
    int i, j, temp;
    *time = 0;  // Inisialisasi waktu total
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                // Setiap kali ada penukaran, tambahkan waktu
                *time += x;
            }
        }
    }
}

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N, X, time;
        scanf("%d %d", &N, &X);

        int A[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        bubbleSort(A, N, X, &time);

        printf("Case #%d: %d\n", t, time);
    }

    return 0;
}
