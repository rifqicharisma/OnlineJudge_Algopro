#include <stdio.h>
#include <string.h>

void balikString(char str[], int start, int end) {
    if (start >= end) {
        return;
    }

    // Tukar karakter pada indeks start dan end
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    balikString(str, start + 1, end - 1);
}

int main() {
    int T;
    scanf("%d\n", &T);

    for (int t = 1; t <= T; t++) {
        char S[1005];
        scanf(" %[^\n]", S);
        balikString(S, 0, strlen(S) - 1);
        printf("Case #%d: %s\n", t, S);
    }
    return 0;
}
