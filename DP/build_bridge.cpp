#include <cstdio>

int N, M;
int** mem;

int get(int i, int j) {

    if (i == N-1)
        return 1;

    if ((N-i) > (M-j))
        return 0;

    if (mem[i][j] != -1)
        return mem[i][j];

    int total = 0;
    for (int nj=j+1; nj<M; nj++) {
        total += get(i+1, nj);
    }

    mem[i][j] = total;
    return total;
}

int main(void) {

    int ts = 0;
    scanf("%d", &ts);
    while (ts--) {

        scanf("%d %d", &N, &M);
        mem = new int*[N];
        for (int i=0; i<N; i++) {
            mem[i] = new int[M];
            for (int j=0; j<M; j++)
                mem[i][j] = -1;
        }

        int total = 0;
        for (int i=0; i<M-N+1; i++) {
            total += get(0, i);
        }
        printf("%d\n", total);

        for (int i=0; i<N; i++) {
            delete [] mem[i];
        }
        delete [] mem;

    }

    return 0;
}

int main(N,n,M,x){
    for( gets(&x); ~scanf("%d%d",&N,&M); printf("%d ",x) )
        for(x=n=1; n<=N; x=x*M--/n++);
}

