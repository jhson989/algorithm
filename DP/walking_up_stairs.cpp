#include <stdio.h>

int N;
int *stair;
int *m[3];

int main(void) {

    scanf("%d", &N);

    stair = new int[N];
    m[0] = new int[N]();
    m[1] = new int[N]();
    m[2] = new int[N]();
    
    for (int i=0; i<N; i++) {
        scanf("%d", &stair[i]);
    }
    m[0][0] = 0;
    m[1][0] = stair[0];
    m[2][0] = stair[0];

    for (int i=1; i<N; i++) {
        m[0][i] = m[1][i-1] > m[2][i-1] ? m[1][i-1] : m[2][i-1];
        m[1][i] = m[0][i-1] + stair[i];
        m[2][i] = m[1][i-1] + stair[i];
    }

    printf("%d\n", m[1][N-1] > m[2][N-1] ? m[1][N-1] : m[2][N-1]);

    return 0;
}