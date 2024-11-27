#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);  // Membaca jumlah test case

    char input[1001];  // Maksimal panjang string adalah 1000 karakter
    char vowels[] = "aeiouAEIOU";  // Array vokal yang menyimpan semua huruf vokal

    for (int t = 1; t <= T; t++) {
        scanf(" %[^\n]", input);  // Membaca satu baris string (termasuk spasi)
        getchar();
        printf("Case #%d: ", t);

        // Loop untuk setiap karakter dalam string input
        for (int i = 0; input[i] != '\0'; i++) {
            int is_vowel = 0;  // Penanda apakah karakter adalah vokal

            // Loop untuk memeriksa apakah karakter input[i] adalah vokal
            for (int j = 0; j < 10; j++) {
                if (input[i] == vowels[j]) {
                    is_vowel = 1;  // Jika karakter adalah vokal, tandai sebagai vokal
                    break;  // Keluar dari loop jika sudah ketemu vokal
                }
            }

            // Jika bukan vokal, cetak karakter
            if (!is_vowel) {
                printf("%c", input[i]);
            }
        }

        printf("\n");  // Pindah ke baris berikutnya
    }

    return 0;
}
