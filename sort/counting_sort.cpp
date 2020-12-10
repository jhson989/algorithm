#include <cstdio>


int main(void) {
    int N, t;
    int num[10001]={};

    scanf("%d", &N);
    for (int i=0; i<N; i++) {
        scanf("%d", &t);
        num[t]++;
    }
    
    for (int i=1; i<10001; i++) {
        while(num[i]--){
            printf("%d\n", i);
        }
    }

    return 0;

}