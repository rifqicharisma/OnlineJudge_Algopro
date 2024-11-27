#include <stdio.h>

long long int count_multiples_of_3 = 0;
int F(int n) {
    if (n == 0) return 1;
    if (n == 1) return 2;
    if (n % 3 == 0) count_multiples_of_3++;
    if (n % 5 == 0) return n * 2;
    return F(n - 1) + n + F(n - 2) + (n - 2);
}

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N);
        count_multiples_of_3 = 0;  // Reset counter kelipatan 3
        int result = F(N);  // Hitung F(N)
        printf("Case #%d: %d %lld\n", t, result, count_multiples_of_3);
    }
    return 0;
}
