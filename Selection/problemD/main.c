#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, katakLK, katakPR;

    scanf("%d", &t);

    for(int i = 0; i < t; i++){
        scanf("%d %d", &katakLK, &katakPR);

        if(katakLK%2==0 && katakPR%2==0){
            printf("Case #%d: Party time!\n", i+1);
        }else{
            printf("Case #%d: Need more frogs\n", i+1);
        }

    }
    return 0;
}
