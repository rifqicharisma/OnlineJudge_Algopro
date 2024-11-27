#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x1, x2, x3;

    // Input tiga huruf
    scanf(" %c %c %c", &x1, &x2, &x3);

    // Menggunakan if-else untuk mengurutkan huruf berdasarkan alfabetis
    if (x1 <= x2 && x1 <= x3) {
        if (x2 <= x3) {
            printf("1 2 3\n"); // x1 <= x2 <= x3
        } else {
            printf("1 3 2\n"); // x1 <= x3 <= x2
        }
    } else if (x2 <= x1 && x2 <= x3) {
        if (x1 <= x3) {
            printf("2 1 3\n"); // x2 <= x1 <= x3
        } else {
            printf("2 3 1\n"); // x2 <= x3 <= x1
        }
    } else { // x3 <= x1 && x3 <= x2
        if (x1 <= x2) {
            printf("3 1 2\n"); // x3 <= x1 <= x2
        } else {
            printf("3 2 1\n"); // x3 <= x2 <= x1
        }
    }
    return 0;
}
