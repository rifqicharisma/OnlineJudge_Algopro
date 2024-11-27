#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T, jumlahMakanan, uang, total, harga;
    scanf("%d", &T);

    for(int i = 1; i <= T; i++){
        scanf("%d %d", &jumlahMakanan, &uang);
        for(int j = 0; j < jumlahMakanan; j++){
            scanf("%d", &harga);
            total += harga;
        }
        //printf("%d", total);
        if(total <= uang){
            printf("Case #%d: No worries\n", i);
        }else{
            printf("Case #%d: Wash dishes\n", i);
        }
        total = 0;
    }
    return 0;
}
