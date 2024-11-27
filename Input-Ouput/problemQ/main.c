#include <stdio.h>
#include <stdlib.h>

int main()
{
    char strings[100];
    gets(strings);

    printf("Halo %s\n", strings);
    return 0;
}
