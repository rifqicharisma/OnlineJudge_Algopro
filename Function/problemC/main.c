#include <stdio.h>
int ackermann(int M, int N){
    if(M == 0){
        return N + 1;
    }else if (M > 0 && N == 0)
    {
        return ackermann(M - 1, 1);
    }else if (M > 0 && N > 0)
    {
        return ackermann(M - 1, ackermann(M, N - 1));
    }
    return 0;
}
int main(){
    int M, N;
    scanf("%d %d", &M, &N);
    int result = ackermann(M, N);
    printf("result: %d\n", result);
    return 0;
}
