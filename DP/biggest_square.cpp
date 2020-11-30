#include <cstdio>

int N, M;
int** map;
int** m;

int get_max (int i, int j) {
    if (i < 0 || j < 0) {
        return 0;
    }

    if (m[i][j] != -1) {
        return m[i][j];
    }
    if (map[i][j] == 0) {
        m[i][j] = 0;
        return 0;
    }

    int min = 1000001, t;
    t = get_max(i-1, j);
    min = min < t ? min : t;
    t = get_max(i, j-1);
    min = min < t ? min : t;
    t = get_max(i-1, j-1);
    min = min < t ? min : t;

    m[i][j] = (min + 1);
    return m[i][j];

}

int main(void) {

    char t;
    scanf("%d %d", &N, &M);
    map = new int*[N];
    m = new int*[N];
    for (int i=0; i<N; i++) {
        map[i] = new int[M];
        m[i] = new int[M];
        scanf("%c", &t);
        for (int j=0; j<M; j++) {
            
            scanf("%c", &t);
            map[i][j] = t-'0';
            m[i][j] = -1;
        }
    }

    int max = 0;
    for (int i=0; i<N; i++)
        for (int j=0; j<M; j++) {
            int lmax = get_max(i, j);
            max = max > lmax ? max : lmax;
        }

    printf("%d\n", max*max);

    return 0;
}