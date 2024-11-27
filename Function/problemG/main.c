#include <stdio.h>
#include <string.h>

int isPalindrome(char str[], int start, int end) {
    if (start >= end) {
        return 1;
    }
    // Jika karakter di start dan end tidak sama, maka bukan palindrom
    if (str[start] != str[end]) {
        return 0;
    }
    // rekursif untuk substring
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        char S[1001];
        scanf("%s", S);
        int length = strlen(S);
        if (isPalindrome(S, 0, length - 1)) {
            printf("Case #%d: yes\n", t);
        } else {
            printf("Case #%d: no\n", t);
        }
    }

    return 0;
}
