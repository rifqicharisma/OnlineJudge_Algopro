#include <stdio.h>
#include <string.h>

#define MAX_PRODUCTS 100
#define MAX_NAME_LENGTH 51

// Struktur data untuk produk
typedef struct {
    char name[MAX_NAME_LENGTH];
    int stock;
} Product;

// Fungsi untuk mencari indeks produk berdasarkan nama
int findProduct(Product products[], int count, const char *name) {
    for (int i = 0; i < count; i++) {
        if (strcmp(products[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    FILE *file = fopen("testdata.in", "r");
    if (file == NULL) {
        printf("Error: Could not open file testdata.in\n");
        return 1;
    }

    int T;

    // Membaca jumlah test case
    fscanf(file, "%d", &T);

    for (int t = 1; t <= T; t++) {
        int N;
        fscanf(file, "%d", &N);

        Product products[MAX_PRODUCTS];
        int productCount = 0;
        int hasError = 0;
        int negativeStock[MAX_PRODUCTS] = {0};

        for (int i = 0; i < N; i++) {
            char type[10], name[MAX_NAME_LENGTH];
            int quantity;

            // Membaca transaksi
            fscanf(file, "%[^#]#%[^#]#%d", type, name, &quantity);

            int index = findProduct(products, productCount, name);
            if (index == -1) {
                // Tambahkan produk baru jika belum ada
                strcpy(products[productCount].name, name);
                products[productCount].stock = 0;
                index = productCount;
                productCount++;
            }

            // Proses transaksi
            if (strcmp(type, "buy") == 0) {
                products[index].stock += quantity;
            } else if (strcmp(type, "sell") == 0) {
                if (products[index].stock < quantity) {
                    negativeStock[index] = 1;
                    hasError = 1;
                } else {
                    products[index].stock -= quantity;
                }
            }
        }

        // Output hasil
        printf("Case #%d:\n", t);

        if (hasError) {
            for (int i = 0; i < productCount; i++) {
                if (negativeStock[i]) {
                    printf("stock is not enough for product %s\n", products[i].name);
                }
            }
        } else {
            for (int i = 0; i < productCount; i++) {
                printf("%s - %d\n", products[i].name, products[i].stock);
            }
        }
    }

    fclose(file);
    return 0;
}
