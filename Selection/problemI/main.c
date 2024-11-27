#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, c;
    float a, b;

    scanf("%d", &t);

    for(int i = 0; i < t; i++){
        scanf("%f %f %d", &a, &b, &c);
        float hasil = (b/100)*a;
        float hasil1 = a - hasil;
        if(hasil > c){
            printf("Case #%d: 5000\n", i+1);
        }else{
            printf("Case #%d: %.0f\n", i+1, hasil);
        }
    }
    return 0;
}
