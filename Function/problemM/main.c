#include <stdio.h>

// Fungsi untuk mengecek apakah B bisa diubah menjadi A
int bisaUbah(int A, int B) {
    while (B > A) {
        if (B % 2 == 0) {
            B /= 2;  // Jika B genap, bagi dua
        } else if (B % 3 == 1) {
            B = (B - 1) / 3;  // Jika B ganjil dan (B-1) habis dibagi 3, kembalikan
        } else {
            return 0;  // Jika B tidak bisa diubah lagi
        }
    }
    return (B == A);  // Cek apakah B berhasil menjadi A
}

int main() {
    int T;  // Jumlah test case
    scanf("%d", &T);  // Membaca jumlah test case

    for (int t = 1; t <= T; t++) {
        int A, B;
        scanf("%d %d", &A, &B);  // Membaca nilai A dan B untuk setiap test case

        // Cek apakah B bisa berubah menjadi A
        if (bisaUbah(A, B)) {
            printf("Case #%d: YES\n", t);
        } else {
            printf("Case #%d: NO\n", t);
        }
    }

    return 0;
}
