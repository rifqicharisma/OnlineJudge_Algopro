#include <stdio.h>
#include <stdlib.h>

int main()
{
    char birthday[100];

    gets(birthday);
    printf("Happy Birthday to %s.\n", birthday);
    return 0;
}
