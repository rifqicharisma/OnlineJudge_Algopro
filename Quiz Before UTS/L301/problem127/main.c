#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Membaca jumlah test case

    for (int t = 1; t <= T; t++) {
        char S[100001];  // Menyimpan string
        scanf("%s", S);  // Membaca string S

        int len = 0;  // Untuk menghitung panjang string
        while (S[len] != '\0') {
            len++;  // Menghitung panjang string
        }

        int distinct_count = 0;  // Jumlah karakter unik

        // Looping untuk mencari karakter unik
        for (int i = 0; i < len; i++) {
            int is_unique = 1;  // Flag untuk cek apakah karakter unik

            // Cek apakah karakter S[i] pernah muncul sebelumnya
            for (int j = 0; j < i; j++) {
                if (S[i] == S[j]) {
                    is_unique = 0;  // Jika ditemukan, berarti tidak unik
                    break;  // Keluar dari loop pengecekan
                }
            }

            // Jika karakter unik, tambahkan ke distinct_count
            if (is_unique) {
                distinct_count++;
            }
        }

        // Menggunakan if-else untuk menentukan output
        if (distinct_count % 2 == 0) {
            printf("Case #%d: Breakable\n", t);
        } else {
            printf("Case #%d: Unbreakable\n", t);
        }
    }

    return 0;
}
