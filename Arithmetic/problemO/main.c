#include <stdio.h>
#include <stdlib.h>

int main()
{
    // belum selesai
    int angka1[4], angka2[4];
    int hasil[50];

    for(int i = 0; i <= 3; i++){
        scanf("%d %d", &angka1[i], &angka2[i]);
        hasil[i] = angka1[i]*angka2[i];
    }

    for(int i = 0; i <= 3; i++){
        printf("%d\n", hasil[i]);
    }

    return 0;
}
