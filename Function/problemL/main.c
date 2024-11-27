#include <stdio.h>

int hitungJojonanci(int N, int X, int Y) {
    if (N == 0) {
        return X;  // Jika N adalah 0, kembalikan A0
    } else if (N == 1) {
        return Y;  // Jika N adalah 1, kembalikan A1
    } else {
        int A0 = X, A1 = Y, An;
        for (int i = 2; i <= N; i++) {
            An = A1 - A0;  // Jojonanci: An = A1 - A0
            A0 = A1;
            A1 = An;
        }
        return An;
    }
}

int main() {
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++) {
        int N, X, Y;
        scanf("%d %d %d", &N, &X, &Y);
        int hasil = hitungJojonanci(N, X, Y);
        printf("Case #%d: %d\n", t, hasil);
    }
    return 0;
}
