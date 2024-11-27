#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T, N, M, K, porsi;
    scanf("%d", &T);

    for(int i = 1; i <= T; i++){
        scanf("%d %d %d", &N, &M, &K);

        int porsiMaksimal = K;
        for(int j = 0; j < N; j++){
            scanf("%d", &porsi);

            // cari porsi terbesar
            if(porsi >= K && porsi <= M){
                porsiMaksimal = porsi;
            }
        }
        // Output hasil untuk test case ini
        printf("Case #%d: %d\n", T, porsiMaksimal);
    }
    return 0;
}
