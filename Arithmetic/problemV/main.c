#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    float celcius1, celcius2, celcius3;

    scanf("%d", &t);getchar();
    scanf("%f\n%f\n%f", &celcius1, &celcius2, &celcius3);

    float reaumur1 = (4.0/5.0)*celcius1;
    float fahrenheit1 = (9.0/5.0)*celcius1+32;
    float kelvin1 = celcius1+273;

    float reaumur2 = (4.0/5.0)*celcius2;
    float fahrenheit2 =(9.0/5.0)*celcius2+32;
    float kelvin2 = celcius2+273;

    float reaumur3 = (4.0/5.0)*celcius3;
    float fahrenheit3 = (9.0/5.0)*celcius3+32;
    float kelvin3 = celcius3+273;

    printf("%.2f %.2f %.2f\n", reaumur1, fahrenheit1, kelvin1);
    printf("%.2f %.2f %.2f\n", reaumur2, fahrenheit2, kelvin2);
    printf("%.2f %.2f %.2f\n", reaumur3, fahrenheit3, kelvin3);

    return 0;
}
