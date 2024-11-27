#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;

    scanf("%f %f", &a, &b);

    float hasil = (1.00-b/a)*100;

    printf("%.2f%%", hasil);
    return 0;
}
