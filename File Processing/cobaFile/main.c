#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *A = fopen("A.txt", "r");
    FILE *B = fopen("B.txt", "w");

    char karakter;
    while((karakter = fgetc(A)) != EOF){
        fputc(karakter, B);
    }

    fclose(A);
    fclose(B);

    return 0;
}
