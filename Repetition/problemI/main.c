#include <stdio.h>
#include <stdlib.h>

int main()
{
    int jojo, lili, bibi, n, total, rata, siswa;

    scanf("%d", &n);
    scanf("%d %d %d", &jojo, &lili, &bibi);

    for(int i = 0; i < n; i++){
        scanf("%d", &siswa);
        getchar();
        total += siswa;
    }

    //printf("%d\n", total);
    rata = (jojo+lili+bibi+total)/(n+3);

    //printf("%d", rata);

    if(jojo >= rata){
        printf("Jojo lolos\n");
    }else{
        printf("Jojo tidak lolos\n");
    }

    if(lili >= rata){
        printf("Lili lolos\n");
    }else{
        printf("Lili tidak lolos\n");
    }

    if(bibi >= rata){
        printf("Bibi lolos\n");
    }else{
        printf("Bibi tidak lolos\n");
    }
    return 0;
}
