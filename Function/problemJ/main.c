#include <stdio.h>

void siapaPemenang(int n, int t) {
    int giliran = 0;  // Jojo mulai dengan giliran 0, Lili giliran 1
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;  // Jika genap, bagi dua
        } else {
            n = n * 3 + 1;  // Jika ganjil, kalikan tiga lalu tambahkan satu
        }
        giliran = 1 - giliran;  // Tukar giliran (0 -> 1, 1 -> 0)
    }
    if (giliran == 0) {
        printf("Case #%d: Lili\n", t);  // Jika giliran Jojo tapi Lili yang kalah
    } else {
        printf("Case #%d: Jojo\n", t);  // Jika giliran Lili tapi Jojo yang kalah
    }
}
int main() {
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N);
        siapaPemenang(N, t);
    }
    return 0;
}
