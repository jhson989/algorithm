#include <cstdio>

int N;
int* wine;
int* mem[3];

int main(void) {

    scanf("%d", &N);
    wine = new int[N];
    mem[0] = new int[N]();
    mem[1] = new int[N]();
    mem[2] = new int[N]();

    for (int i=0; i<N; i++) {
        scanf("%d", &wine[i]);
    }
    
    mem[0][0] = 0;
    mem[1][0] = wine[0];
    mem[2][0] = wine[0];
    for (int i=1; i<N; i++) {
        mem[0][i] = mem[1][i-1] > mem[2][i-1] ? mem[1][i-1] : mem[2][i-1];
        mem[0][i] = mem[0][i] > mem[0][i-1] ? mem[0][i] : mem[0][i-1];
        mem[1][i] = wine[i] + mem[0][i-1];
        mem[2][i] = wine[i] + mem[1][i-1];
    }
    
    int max = mem[0][N-1] > mem[1][N-1] ? mem[0][N-1] : mem[1][N-1];
    max = max > mem[2][N-1] ? max : mem[2][N-1];
    printf("%d\n", max);
    

    return 0;
}

