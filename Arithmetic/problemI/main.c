#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angka;

    scanf("%d", &angka);

    int hasil = angka+angka;
    printf("%d plus %d is %d\n", angka, angka, hasil);
    printf("minus one is %d\n", hasil-1);


    return 0;
}
