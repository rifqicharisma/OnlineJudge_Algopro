#include<stdio.h>

long long int F(long long int N){
    if(N == 1){
        return 1;
    }
    else if(N % 2 == 0){
        return F(N / 2);
    }
    else if(N % 2 == 1){
        return F(N - 1) + F(N + 1);
    }
}

int main(){
    int T;
    long long int N;
    scanf("%d", &T);
    for(int i = 1; i <= T; i++){
        scanf("%lld", &N);
        printf("Case #%d: %lld\n", i, F(N));
    }
    return 0;
}
