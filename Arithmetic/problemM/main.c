#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pokemonBibi, pokemonLain;

    scanf("%f %f", &pokemonBibi, &pokemonLain);

    float hasil = (pokemonBibi/pokemonLain)*100;
    printf("%.2f%%\n", hasil);
    return 0;
}
