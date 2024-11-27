#include <stdio.h>

int main() {
    char word1[21], word2[21], word3[21];  // Untuk menyimpan tiga kata per baris
    char word4[21], word5[21], word6[21];  // Untuk menyimpan tiga kata baris kedua

    // Membaca tiga kata pertama (baris pertama)
    scanf("%s %s %s", word1, word2, word3);

    // Membaca tiga kata kedua (baris kedua)
    scanf("%s %s %s", word4, word5, word6);

    // Mencetak hasil dengan menambahkan "szs" pada setiap kata
    printf("%sszs %sszs %sszs\n", word1, word2, word3);
    printf("%sszs %sszs %sszs\n", word4, word5, word6);

    return 0;
}

