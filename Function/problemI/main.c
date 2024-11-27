#include <stdio.h>

int fiboCalls[31];

void precomputeFiboCalls() {
    fiboCalls[0] = 1;
    fiboCalls[1] = 1;
    for (int i = 2; i <= 30; i++) {
        fiboCalls[i] = fiboCalls[i-1] + fiboCalls[i-2] + 1;  // Menghitung jumlah pemanggilan
    }
}

int main() {
    int T;
    scanf("%d", &T);

    precomputeFiboCalls();  // Menghitung jumlah pemanggilan Fibonacci untuk semua n sampai 30

    for (int t = 1; t <= T; t++) {
        int n;
        scanf("%d", &n);
        printf("Case #%d: %d\n", t, fiboCalls[n]);
    }
    return 0;
}
