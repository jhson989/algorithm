#include <cstdio>

int a[100][100], b[100][100], c[100][100];
int N, M, K;

void multiply(int a[][100], int b[][100], int c[][100], int N, int M, int K) {

    for (int i=0; i<N; i++)
    {
        for (int j=0; j<K; j++){
            c[i][j] = 0;
            for (int m=0; m<M; m++)
            {
                c[i][j] += a[i][m]*b[m][j];
            }
        }
    }
}

int main(void) {

    scanf("%d %d", &N, &M);
    for (int i=0; i<N; i++)
        for (int j=0; j<M; j++)
            scanf("%d", &a[i][j]);

    scanf("%d %d", &M, &K);
    for (int i=0; i<M; i++)
        for (int j=0; j<K; j++)
            scanf("%d", &b[i][j]);
    
    multiply(a, b, c, N, M, K);

    for (int i=0; i<N; i++)
    {
        for (int j=0; j<K; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }
        

    return 0;
}
