#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file = fopen("testdata.in", "r");

    int A, B;
    fscanf(file, "%d %d", &A, &B);
    fclose(file);

    printf("%d\n", A+B);
    return 0;
}
