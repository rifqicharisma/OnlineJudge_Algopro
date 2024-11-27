#include <stdio.h>

int main() {
    // BELUM SELESAI
    int T, N;

    // Input jumlah kasus uji
    scanf("%d", &T);

    // Loop untuk setiap kasus uji
    for (int t = 1; t <= T; t++) {
        // Input tinggi segitiga
        scanf("%d", &N);

        // Cetak label untuk setiap kasus uji
        printf("Case #%d:\n", t);

        // Loop untuk setiap baris
        for (int i = 1; i <= N; i++) {
            // Cetak spasi
            for (int j = 1; j <= N - i; j++) {
                printf(" ");
            }
            // Cetak bintang
            for (int k = 1; k <= i; k++) {
                printf("*");
            }
            // Pindah ke baris berikutnya
            printf("\n");
        }
    }

    return 0;
}
