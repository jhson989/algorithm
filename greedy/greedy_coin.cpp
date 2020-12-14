#include <cstdio>

int coin[11];
int N, K, num=0;

int main(void) {
    scanf("%d %d", &N, &K);
    for (int i=0; i<N; i++) scanf("%d", &coin[i]);

    for (int i=N-1; i>=0; i--) {
        num += K/coin[i];
        K = K%coin[i];
    }
    printf("%d\n", num);

    return 0;
}
