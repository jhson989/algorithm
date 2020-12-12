#include <cstdio>

int m[100001];

int main(void) {

    bool good = true;
    int N, max = 0, min = 100001;
    scanf("%d", &N);
    for (int i=0; i<N; i++) {
        scanf("%d", &m[i]);
        if (max < m[i]) {
            max = m[i];
            min = m[i];
        }
        min = min < m[i] ? min : m[i];
        if (min < m[i] && m[i] < max)
            good = false;
    }
    

    if (good == false) {
        printf("NO\n");
        return 0;
    }

    max = 0;
    for (int i=0; i<N; i++) {
        int now = m[i];

        if (max < m[i]) {
            for (int j=max+1; j<=now; j++)
                printf("+\n");
            max = m[i];
        }
        printf("-\n");
    }

    return 0;
}
