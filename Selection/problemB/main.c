#include <stdio.h>
#include <stdlib.h>

int main()
{
    int testCase, k, n, m;

    scanf("%d", &testCase);

    for(int i = 0; i < testCase; i++){
        scanf("%d %d %d", &k, &n, &m);

        if(k < (m+n)){
            printf("Case #%d: yes\n", i+1);
        }else{
            printf("Case #%d: no\n", i+1);
        }
    }
    return 0;
}
