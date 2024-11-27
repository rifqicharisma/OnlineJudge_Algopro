#include <stdio.h>
#include <string.h>

void hitungFibonacciString(int n, char hasil[], char s0[], char s1[]) {
    if (n == 0) {
        strcpy(hasil, s0);  // Jika n = 0, hasil adalah S[0]
    } else if (n == 1) {
        strcpy(hasil, s1);  // Jika n = 1, hasil adalah S[1]
    } else {
        char s_n2[1005], s_n1[1005];  // Menyimpan hasil S[n-2] dan S[n-1]

        // Hitung S[n-2] dan S[n-1] menggunakan rekursi
        hitungFibonacciString(n - 2, s_n2, s0, s1);
        hitungFibonacciString(n - 1, s_n1, s0, s1);

        // S[n] = S[n-1] + S[n-2]
        strcpy(hasil, s_n1);
        strcat(hasil, s_n2);
    }
}

int main() {
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++) {
        int n;
        char s0[2];
        char s1[2];

        scanf("%d %s %s", &n, s0, s1);

        char hasil[1005];

        hitungFibonacciString(n, hasil, s0, s1);

        printf("Case #%d: %s\n", t, hasil);
    }

    return 0;
}
