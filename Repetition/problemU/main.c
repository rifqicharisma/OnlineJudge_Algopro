#include <stdio.h>

int main() {
    int T;  // Jumlah test case
    scanf("%d", &T);  // Input jumlah test case

    for (int t = 0; t < T; t++) {
        int N;  // Jumlah permainan
        scanf("%d", &N);  // Input jumlah permainan

        char result;
        int countLili = 0, countBibi = 0;  // Inisialisasi jumlah kemenangan

        // Loop untuk membaca hasil setiap permainan
        for (int i = 0; i < N; i++) {
            scanf(" %c", &result);  // Membaca satu karakter hasil permainan
            if (result == 'L') {
                countLili++;  // Lili menang
            } else if (result == 'B') {
                countBibi++;  // Bibi menang
            }
        }

        // Membandingkan hasil kemenangan
        if (countLili > countBibi) {
            printf("Lili\n");
        } else if (countBibi > countLili) {
            printf("Bibi\n");
        } else {
            printf("None\n");
        }
    }
    return 0;
}
