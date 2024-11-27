#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int jumlahBalon, kekuatanBibi, kekuatanBalon;
    int temp;
    scanf("%lld %lld", &jumlahBalon, &kekuatanBibi);

    for(int i = 0; i < jumlahBalon; i++){
        scanf("%lld", &kekuatanBalon);
        if(kekuatanBalon<kekuatanBibi){
            temp++;
        }
    }
    printf("%d\n", temp);
    return 0;
}
