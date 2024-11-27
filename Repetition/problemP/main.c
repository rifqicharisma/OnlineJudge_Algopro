#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T, finish, total, temp;
    scanf("%d", &T);

    for(int i = 1; i <= T; i++){
        scanf("%d", &finish);
        for(int j = 1; j<= finish; j++){
            total += j;
            if(total >= finish){
                temp = j;
                break;
            }
        }
        printf("Case #%d: %d\n", i, temp);
        total = 0;
    }
    return 0;
}
