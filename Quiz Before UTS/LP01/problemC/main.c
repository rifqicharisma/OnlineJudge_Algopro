#include <stdio.h>

int main() {
    int T;  // Variabel untuk jumlah test case
    scanf("%d", &T);  // Membaca jumlah test case

    for (int t = 1; t <= T; t++) {
        int N;  // Variabel untuk jumlah bilangan dalam test case
        scanf("%d", &N);  // Membaca jumlah bilangan bulat positif

        int arr[1001] = {0};  // Array untuk melacak bilangan unik (asumsi bilangan maksimal 1000)
        int count = 0;  // Variabel untuk menghitung jumlah bilangan unik

        // Membaca setiap bilangan bulat
        for (int i = 0; i < N; i++) {
            int num;
            scanf("%d", &num);  // Membaca bilangan bulat
            if (arr[num] == 0) {  // Jika bilangan belum muncul
                arr[num] = 1;  // Tandai bahwa bilangan ini sudah muncul
                count++;  // Tambah jumlah bilangan unik
            }
        }

        // Cetak hasil untuk test case ini
        printf("Case #%d: %d\n", t, count);
    }

    return 0;
}
