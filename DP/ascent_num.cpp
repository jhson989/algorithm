#include <cstdio>

int N;
int * m[10];

int main(void) {

    scanf("%d", &N);
    for (int i=0; i<10; i++) {
        m[i] = new int[N]();
        m[i][0] = 1;
    }

    for (int i=1; i<N; i++) {
        for (int n=0; n<10; n++) {
            for (int pre=0; pre<=n; pre++)
                m[n][i] += m[pre][i-1];
            m[n][i] = m[n][i]%10007;
        }
    }

    int sum = 0;
    for (int i=0; i<10; i++) 
        sum += m[i][N-1];

    printf("%d\n", sum%10007);
    return 0;
}