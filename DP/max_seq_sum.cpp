#include <stdio.h>

int N;
int *n, *m;

int main(void) {

    scanf("%d", &N);
    n = new int[N]();
    m = new int[N]();
    for (int i=0; i<N; i++)
        scanf("%d", &n[i]);

    m[0] = n[0];
    for (int i=1; i<N; i++) {
        m[i] = m[i-1]+n[i] > n[i] ? m[i-1]+n[i] : n[i];
    }
    int max = -1000 * 100000;
    for (int i=0; i<N; i++)
        max = max > m[i] ? max : m[i];

    printf("%d\n", max);
    return 0;
}