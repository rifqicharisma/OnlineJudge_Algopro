#include <stdio.h>
#include <stdlib.h>

int main()
{
    char strings[100];

    gets(strings);
    printf("Congrats \"%s\" for joining the CS department at BINUS.\n", strings);
    return 0;
}
