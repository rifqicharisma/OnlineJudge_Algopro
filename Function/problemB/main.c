#include<stdio.h>

void branch(int b[], int len, int nilai, int index) {
    int dum = nilai + b[index];
    int anak = 0; // Node punya anak atau tidak
    // 2*index adalah indeks anak kiri
    if ((2 * index) <= len) {
        anak = 1; // Node ini punya anak
        // Panggil branch untuk node anak sebelah kiri
        branch(b, len, dum, (2 * index));
    }
    // 2*index+1 adalah indeks anak kanan
    if ((2 * index + 1) <= len) {
        // Panggil branch untuk node anak kanan
        branch(b, len, dum, (2 * index + 1));
    }
    // Node paling bawah
    if (anak == 0) {
        printf("%d\n", dum); // jumlah leaf
    }
}

int main() {
    int T;
    scanf("%d", &T); getchar();

    for (int i = 1; i <= T; i++) {
        int a;
        scanf("%d", &a); getchar();
        int b[a]; // simpan nilai node
        // Loop untuk nilai node
        for (int j = 1; j <= a; j++) {
            scanf("%d", &b[j]); // Baca nilai node dan simpan di array
        } getchar();
        printf("Case #%d:\n", i);
        // Hitung panjang array b[] dalam jumlah elemen
        int len = (sizeof(int) * a) / sizeof(b[1]);  // Menghitung jumlah elemen array (ini agak berlebihan sebenarnya)
        // Panggil fungsi branch untuk memulai perhitungan daun dari node 1 (index 1) dengan nilai awal 0
        branch(b, len, 0, 1);
    }

    return 0;
}
