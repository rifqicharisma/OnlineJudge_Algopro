#include <stdio.h>

// Definisi union untuk menyimpan integer 4 byte dan byte individu
union Converter {
    unsigned int number;  // Angka unsigned 4 byte
    unsigned char bytes[4]; // Array 4 byte untuk menyimpan byte individu
};

int main() {
    union Converter converter;

    // Meminta pengguna untuk memasukkan angka unsigned integer 4 byte
    printf("Masukkan angka unsigned integer (4 byte): ");
    scanf("%u", &converter.number);

    // Menampilkan nilai dalam bentuk heksadesimal
    printf("Heksadesimal: 0x%02X%02X%02X%02X\n",
           converter.bytes[3], // Byte paling signifikan
           converter.bytes[2],
           converter.bytes[1],
           converter.bytes[0]); // Byte paling tidak signifikan

    return 0;
}
