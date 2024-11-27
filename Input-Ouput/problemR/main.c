#include <stdio.h>
#include <string.h>

int main() {
    char id[11];
    char nama[101];
    char kelas;
    int nomor;

    // Input ID mahasiswa
    gets(id);

    // Input Nama mahasiswa
    gets(nama);

    // Input Kelas dan Nomor
    scanf("%c %d", &kelas, &nomor);


    printf("Id\t: %s\n", id);
    printf("Name\t: %s\n", nama);
    printf("Class\t: %c\n", kelas);
    printf("Num\t: %d\n", nomor);

    return 0;
}
