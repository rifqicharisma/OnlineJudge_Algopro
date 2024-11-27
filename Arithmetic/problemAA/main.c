#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tugas, nilaiUTS, nilaiUAS;

    scanf("%d %d %d", &tugas, &nilaiUTS, &nilaiUAS);
    float hasil = (0.2*tugas)+(0.3*nilaiUTS)+(0.5*nilaiUAS);

    printf("%.2f\n", hasil);
    return 0;
}
