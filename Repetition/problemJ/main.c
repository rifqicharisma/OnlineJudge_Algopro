#include <stdio.h>
#include <stdlib.h>

int main()
{
    int testCase, jumlahAngka, angka, total;

    scanf("%d", &testCase);
    for(int i = 0; i < testCase; i++){
        scanf("%d", &jumlahAngka);
        for(int j = 0; j < jumlahAngka; j++){
            scanf("%d", &angka);
            total += angka;
            //printf("%d\n", total);
        }
        printf("Case #%d: %d\n", i+1, total);
        total = 0;
    }
    return 0;
}
