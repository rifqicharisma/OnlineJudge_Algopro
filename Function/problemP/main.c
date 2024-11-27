#include <stdio.h>

int jobonacci(int n) {
    if (n == 0) {
        return 0;  // jobonacci[0] = 0
    } else if (n == 1 || n % 2 == 1) {
        return 1;  // jobonacci[1] = 1 dan untuk n ganjil, jobonacci[n] = 1
    } else {
        return jobonacci(n-1) + jobonacci(n-2);  // jobonacci[n] = jobonacci[n-1] + jobonacci[n-2]
    }
}

int main() {
    int N;
    scanf("%d", &N);
    int hasil = jobonacci(N);
    printf("%d\n", hasil);

    return 0;
}
