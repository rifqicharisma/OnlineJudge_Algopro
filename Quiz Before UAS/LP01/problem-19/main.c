#include <stdio.h>
#include <stdlib.h>

// UNSOLVED

typedef struct{
    char nama[100];
    int stok;
}Produk;

// mencari indeks produk
int linearSearch(Produk arr[], int size, const char *key){
    for(int i = 0; i < size; i++){
        if(strcmp(arr[i].nama, key)==0){
            return i;
        }
    }
    return -1;
}

int main()
{
    int testCase;
    scanf("%d", &testCase);

    for(int i = 1; i <= testCase; i++){
        int jmlData;

        scanf("%d", &jmlData);

        Produk produk[100];
        int count_produk = 0;
        int error = 0;

        for(int j = 0; j < jmlData; j++){
            char transaksi[10], namaProduk[100];
            int qty;

            scanf("%[^#]#%[^#]#%d", transaksi, namaProduk, &qty);

            int index = linearSearch(produk, count_produk, namaProduk);

            if(index == -1){
                // jika belum ada, tambahkan produk
                strcpy(produk[count_produk].nama, namaProduk);
                produk[count_produk].stok = 0;
                index = count_produk;
                count_produk++;
            }

            // Proses transaksi
            if(strcmp(transaksi, "buy") == 0){
                produk[index].stok += qty;
            }else if(strcmp(transaksi, "sell") == 0){
                produk[index].stok -= qty;
                if(produk[index].stok < 0){
                    error = 1;
                }
            }

        }

        printf("Case #%d:\n", i);

        if(error){
            for(int i = 0; i < count_produk; i++){
                if(produk[i].stok < 0){
                    printf("stock is not enough for product %s\n", produk[i]);
                }
            }
        }else{
            for (int i = 0; i < count_produk; i++) {
                printf("%s - %d\n", produk[i].nama, produk[i].stok);
            }
        }
    }
    return 0;
}
