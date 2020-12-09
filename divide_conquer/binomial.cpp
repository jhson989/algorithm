#include <cstdio>
#include <cstring>

unsigned int** m;

int main(void) {

    int N, K;
    scanf("%d %d", &N, &K);
    K = K < N-K ? K : N-K;

    m = new unsigned int*[2];
    m[0] = new unsigned int[N+1];
    m[1] = new unsigned int[N+1];

    m[0][0] = 1;
    m[0][1] = 1;
    m[1][1] = 1;    

    if (N == 1) {
        printf("1\n");
        return 0;
    }
    
    bool now = true;
    for (int i=2; i<=N; i++) {
        m[(int)now][0] = 1;
        m[(int)now][1] = i;
        for (int j=K-(N-i) >= 0 ? K-(N-i) : 0; j<=i && j<=K ; j++) {
            m[(int)now][j] = (m[(int)!now][j-1] + m[(int)!now][j])%1000000007; 
        }
        now = !now;
    }

    printf("%d\n", m[(int)!now][K]);
    return 0;
}
