#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T;  // Jumlah test case
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int A, B;
        scanf("%d %d", &A, &B);

        int total_drunk = A;  // Jumlah total madu yang diminum awalnya sama dengan A
        int empty_bottles = A;  // Botol kosong awalnya sama dengan A

        // Selama botol kosong cukup untuk ditukar menjadi botol baru
        while (empty_bottles >= B) {
            int new_bottles = empty_bottles / B;  // Botol baru yang didapat
            total_drunk += new_bottles;  // Tambahkan jumlah madu yang diminum
            empty_bottles = new_bottles + (empty_bottles % B);  // Botol kosong baru + sisa botol kosong
        }

        // Cetak hasil untuk setiap kasus uji
        printf("Case #%d: %d\n", t, total_drunk);
    }
    return 0;
}
