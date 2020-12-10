#include <stdio.h>

int N;
int * m[2];

int main(void) {

    scanf("%d", &N);
    m[0] = new int[N+1]();
    m[1] = new int[N+1]();

    m[1][1] = 1;
    m[0][2] = 1;
    m[1][2] = 1;

    for (int i=3; i<=N; i++) {
        m[0][i] = (m[0][i-2] + m[1][i-2]) % 15746;
        m[1][i] = (m[0][i-1] + m[1][i-1]) % 15746;
    }

    printf("%d", (m[0][N]+m[1][N])%15746);

    return 0;
}