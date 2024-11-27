#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cage, animal, jumlah;

    scanf("%d", &cage);

    for(int i = 1; i <= cage; i++){
        scanf("%d", &animal);

        jumlah += animal;
    }
    printf("%d\n", jumlah);

    return 0;
}
