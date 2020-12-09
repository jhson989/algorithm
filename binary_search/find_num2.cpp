#include <cstdio>
int N, M, t;

int main(void) {

    int *a = new int[10000000*2+1]();
    scanf("%d", &N);
    for (int i=0; i<N; i++){
        scanf("%d", &t);
        a[10000000+t]++;
    }

    scanf("%d", &M);
    for (int i=0; i<M; i++){
        scanf("%d", &t);
        printf("%d\n", a[10000000+t]);
    }

    return 0;
}
