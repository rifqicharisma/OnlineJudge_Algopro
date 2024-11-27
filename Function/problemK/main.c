#include <stdio.h>

int fibonacci(int F0, int F1, int K) {
    if (K == 0) {
        return F0;  // Jika K = 0, kembalikan F0
    } else if (K == 1) {
        return F1;  // Jika K = 1, kembalikan F1
    } else {
        int Fn_2 = F0, Fn_1 = F1, Fn;
        for (int i = 2; i <= K; i++) {
            Fn = Fn_1 + Fn_2;
            Fn_2 = Fn_1;
            Fn_1 = Fn;
        }
        return Fn;
    }
}

int main() {
    int F0, F1, K;
    scanf("%d %d", &F0, &F1);
    scanf("%d", &K);
    int hasil = fibonacci(F0, F1, K);
    printf("%d\n", hasil);

    return 0;
}
