#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int daging, sayur, telur;
    scanf("%lld %lld %lld", &daging, &sayur, &telur);

    if(daging != sayur && sayur != telur && daging != telur){
        if(daging>sayur && daging>telur){
            printf("Daging\n");
            if(sayur>telur){
                printf("Sayur\n");
                printf("Telur\n");
            }else{
                printf("Telur\n");
                printf("Sayur\n");
            }
        } else if(sayur>daging && sayur>telur){
            printf("Sayur\n");
            if(daging>telur){
                printf("Daging\n");
                printf("Telur\n");
            }else{
                printf("Telur\n");
                printf("Daging\n");
            }
        } else {
            printf("Telur\n");
            if(daging>sayur){
                printf("Daging\n");
                printf("Sayur\n");
            }else{
                printf("Sayur\n");
                printf("Daging\n");
            }
        }
    }
    return 0;
}
