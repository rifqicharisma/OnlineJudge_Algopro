#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Permukaan = (2 x ½ x alas x tinggi) + (keliling alas x t)
    float l, b, h, hasil;

    scanf("%f %f %f", &l, &b, &h);

    hasil = (2*(0.5*b*h))+((3*b)*l);

    printf("%.3f\n", hasil);
    return 0;
}
