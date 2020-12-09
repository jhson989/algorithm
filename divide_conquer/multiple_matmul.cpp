#include <cstdio>
int N;
int input[6][6];

void multiply(int a[][6], int b[][6], int c[][6]) {
    for (int i=0; i<N; i++) 
        for (int j=0; j<N; j++) {
            c[i][j] = 0;
            for (int k=0; k<N; k++)
                c[i][j] += a[i][k]*b[k][j];
            c[i][j] = (c[i][j])%1000;
        }
            
}

void get(int output[][6], unsigned long long int now) {
    int t1[6][6], t2[6][6];
    if (now == 1) {
        for (int i=0; i<N; i++) 
            for (int j=0; j<N; j++) 
                output[i][j] = (input[i][j]%1000);
        return ;
    } else if (now %2 == 1) {
        get(t1, now/2);
        multiply(t1, t1, t2);
        multiply(t2, input, output);
        return;
    } else {
        get(t1, now/2);
        multiply(t1, t1, output);
        return ;
    }
}

int main(void) {

    unsigned long long int B;
    int output[6][6];
    scanf("%d %llu", &N, &B);
    for (int i=0; i<N; i++) for (int j=0; j<N; j++) scanf("%d", &input[i][j]);
    get(output, B);

    for (int i=0; i<N; i++){
        for (int j=0; j<N; j++)
            printf("%d ", output[i][j]);
        printf("\n");
    } 
}