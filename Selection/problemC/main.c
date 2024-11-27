#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, gojo, bipay;

    scanf("%d", &t);

    for(int i = 0; i < t; i++){
        scanf("%d %d", &gojo, &bipay);

        if(gojo>bipay){
            printf("Case #%d: Go-Jo\n", i+1);
        }else{
            printf("Case #%d: Bi-Pay\n", i+1);
        }
    }
    return 0;
}
