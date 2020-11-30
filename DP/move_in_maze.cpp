#include <cstdio>

int N, M;
int** m, **map;

int get (int n, int a) {

    if (n < 0 || a <0)
        return 0;

    if (m[n][a] != -1)
        return m[n][a];

    int max = -1, now;
    now = get(n-1, a);
    max = max > now ? max : now;
    now = get(n, a-1);
    max = max > now ? max : now;
    now = get(n-1, a-1);
    max = max > now ? max : now;
    
    m[n][a] = max + map[n][a];

    return m[n][a];
}

int main(void) {

    scanf("%d %d", &N, &M);
    m = new int*[N];
    map = new int*[N];
    for (int i=0; i<N; i++) {
        m[i] = new int[M]();
        map[i] = new int[M]();
        for (int j=0; j<M; j++) {
            scanf("%d", &map[i][j]);
            m[i][j] = -1;
        }
    }

    printf("%d\n", get(N-1, M-1));

    return 0;
}