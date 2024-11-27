#include <stdio.h>
#include <stdlib.h>

// Struct 1 ==============
/*
struct Mahasiswa{
    int nim;
    char nama[30];
    float ipk;
};
*/

// Nested struct ============
/*
struct Address{
    char street[30];
    int number;
    char city[30];
    char province[30];
};

struct Mahasiswa {
    int nim;
    char name[30];
    struct Address addr;
};
*/

// Array of structure
struct Mahasiswa{
    int nim;
    char name[30];
    float ipk;
};

int main()
{
    // Struct 1
    /*
    struct Mahasiswa student1 = {12345, "Budi", 3.75};

    printf("NIM: %d\n", student1.nim);
    printf("Nama: %s\n", student1.nama);
    printf("IPK: %f\n", student1.ipk);
    return 0;
    */

    // Nested Struct ========
    /*
    struct Mahasiswa student1 = {12345, "Budiono", {"Jl. Kebon Jeruk", 21, "Bonjer", "Jakarta"}};

    printf("NIM: %d\n", student1.nim);
    printf("Nama: %s\n", student1.name);
    printf("Alamat: %s No.%d, %s, %s\n", student1.addr.street, student1.addr.number, student1.addr.city, student1.addr.province);
    */

    struct Mahasiswa students[3] = {
        {
            1234, "Ken", 3.75
        },
        {
            1235, "Kim", 3.2
        },
        {
            1236, "Hantu", 3.45
        }
    };

    for (int i = 0; i < 3; i++) {
        printf("NIM: %d, Nama: %s, IPK: %.2f\n", students[i].nim, students[i].name, students[i].ipk);
    }
    return 0;
}
