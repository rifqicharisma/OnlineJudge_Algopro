#include <stdio.h>
#include <stdlib.h>

int main()
{
    float harga[100], diskon[100], hargaAsli[100];

    for(int i = 0; i <= 3; i++){
        scanf("%f %f", &diskon[i], &harga[i]);
        hargaAsli[i] = (harga[i]/(1-(diskon[i]/100)));
    }

    for(int i = 0; i <= 3; i++){
        printf("$%.2lf\n", hargaAsli[i]);
    }

    return 0;
}
