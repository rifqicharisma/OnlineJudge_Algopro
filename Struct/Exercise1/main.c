#include <stdio.h>

// Struktur untuk menyimpan data tanggal lahir
struct Date {
    int day;
    int month;
    int year;
};

// Struktur untuk menyimpan alamat
struct Address {
    char street[50];
    int number;
    char city[30];
};

// Struktur untuk menyimpan data mahasiswa
struct Student {
    int nim;
    char name[50];
    struct Address address;
    char placeOfBirth[30];
    struct Date dateOfBirth;
};

int main() {
    struct Student students[2]; // Array untuk menyimpan data 5 mahasiswa

    // Input data untuk 2 mahasiswa
    for (int i = 0; i < 2; i++) {
        printf("Masukkan data untuk mahasiswa #%d:\n", i + 1);
        printf("NIM: ");
        scanf("%d", &students[i].nim);

        printf("Nama: ");
        scanf("%s", students[i].name); // Menggunakan %s untuk input string

        printf("Tempat Lahir: ");
        scanf("%s", students[i].placeOfBirth);

        printf("Tanggal Lahir (dd mm yyyy): ");
        scanf("%d %d %d", &students[i].dateOfBirth.day, &students[i].dateOfBirth.month, &students[i].dateOfBirth.year);

        printf("Alamat:\n");
        printf("Nama Jalan: ");
        scanf("%s", students[i].address.street);

        printf("Nomor Jalan: ");
        scanf("%d", &students[i].address.number);

        printf("Kota: ");
        scanf("%s", students[i].address.city);

        printf("\n");
    }

    // Menampilkan data mahasiswa
    printf("Data Mahasiswa:\n");
    for (int i = 0; i < 2; i++) {
        printf("Mahasiswa #%d:\n", i + 1);
        printf("NIM: %d\n", students[i].nim);
        printf("Nama: %s\n", students[i].name);
        printf("Tempat Lahir: %s\n", students[i].placeOfBirth);
        printf("Tanggal Lahir: %02d-%02d-%04d\n", students[i].dateOfBirth.day, students[i].dateOfBirth.month, students[i].dateOfBirth.year);
        printf("Alamat: %s, No. %d, %s\n", students[i].address.street, students[i].address.number, students[i].address.city);
        printf("\n");
    }

    return 0;
}
