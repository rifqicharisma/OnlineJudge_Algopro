#include <stdio.h>
#include <stdlib.h>

int main()
{
    char N[100], A[8],U[100];

    gets(N);
    scanf("%s %s", &A, &U);

    printf("Name: %s\n", N);
    printf("NIS: %s\n", A);
    printf("Age: %s\n", U);
    return 0;
}
