#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;

    scanf("%d %d", &n, &m);

    for(int i = n; i <= m; i++){
        printf("%d\n", i);
    }
    return 0;
}
