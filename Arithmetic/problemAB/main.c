#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pukulan;
    int total_kekuatan = 0;
    int kekuatan_awal = 100;
    int bonus = 0;

    scanf("%d", &pukulan);

    for(int i = 1; i <= pukulan; i++){
        total_kekuatan += kekuatan_awal + bonus;
        bonus+=50;
    }

    printf("%d\n", total_kekuatan);

    return 0;
}
