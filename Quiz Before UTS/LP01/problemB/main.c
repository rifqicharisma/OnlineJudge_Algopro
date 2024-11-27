#include <stdio.h>
#include <string.h>

int main() {
    char S[1000005];  // Array untuk menyimpan kalimat, maksimal 1 juta karakter
    int distinctVowels[26] = {0};  // Array untuk mencatat vokal yang sudah muncul
    int distinctConsonants[26] = {0};  // Array untuk mencatat konsonan yang sudah muncul

    // Membaca input kalimat
    scanf("%[^\n]", S);

    int vowelCount = 0, consonantCount = 0;
    int length = strlen(S);  // Menghitung panjang string menggunakan strlen()

    // Loop berdasarkan panjang string
    for (int i = 0; i < length; i++) {
        char c = S[i];

        if (c >= 'a' && c <= 'z') {  // Hanya memproses huruf kecil
            if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o') {
                if (distinctVowels[c - 'a'] == 0) {
                    distinctVowels[c - 'a'] = 1;
                    vowelCount++;  // Tambah jika vokal baru ditemukan
                }
            } else {
                if (distinctConsonants[c - 'a'] == 0) {
                    distinctConsonants[c - 'a'] = 1;
                    consonantCount++;  // Tambah jika konsonan baru ditemukan
                }
            }
        }
    }

    // Output hasil
    printf("Vocal: %d\n", vowelCount);
    printf("Consonant: %d\n", consonantCount);

    return 0;
}
