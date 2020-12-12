#include <cstdio>
int T, k, n;
unsigned long long m[15][15] = {0};
int main(void) {

    scanf("%d", &T);

    for (int i=0; i<=14; i++)
        m[0][i] = i;
    for (int i=1; i<=14; i++) {
        for (int j=1; j<=14; j++) {
            unsigned long long sum = 0;
            for (int k=1; k<=j; k++)
                sum += m[i-1][k];
            m[i][j] = sum;
        }
    }


    while (T--) {
        scanf("%d", &k);
        scanf("%d", &n);
        printf("%d\n", m[k][n]);
    }

    return 0;
}

