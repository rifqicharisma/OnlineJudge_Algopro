#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input[100];
    char kata1[20], kata2[20], kata3[20];

    gets(input);
    sscanf(input, "%s %s %s\n", kata1, kata2, kata3);

    printf("%s %s %s\n", kata3, kata2, kata1);
    return 0;
}
