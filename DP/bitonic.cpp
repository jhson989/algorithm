#include <stdio.h>

int N;
int *n, *inc, *dec;

int main(void) {

    scanf("%d", &N);
    n = new int[N];
    inc = new int[N]();
    dec = new int[N]();
    for (int i=0; i<N; i++) {
        scanf("%d", &n[i]);
    }

    for (int i=0; i<N; i++) {
        int plus=1;
        for (int j=0; j<i; j++) {
            if (n[i] > n[j]) {
                plus = plus > inc[j]+1 ? plus : inc[j]+1;
            }
        }       
        inc[i] = plus;
    }

    for (int i=N-1; i>=0; i--) {
        int minus=1;
        for (int j=N-1; j>i; j--) {
            if (n[i] > n[j]) {
                minus = minus > dec[j]+1 ? minus : dec[j]+1;
            }
        }
        dec[i] = minus;
    }

    int max = 1;
    for (int i=0; i<N; i++){
        max = inc[i] + dec[i] - 1 > max ? inc[i] + dec[i] - 1 : max;
    }
    printf("%d\n", max);
    return 0;
}