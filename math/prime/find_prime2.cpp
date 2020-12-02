#include <cstdio>
int N, M, min=0, sum=0;

bool find_prime(int t) {

    if (t==1)
        return false;

    for (int i=2; i<=t-1; i++) {
        if (t%i==0)
            return false;
    }
    return true;
}

int main(void) {
    scanf("%d", &N);
    scanf("%d", &M);
    min = M;
    for (int i=N; i<=M; i++) {
        if (find_prime(i) == true) {
            min = min < i ? min : i;
            sum += i; 
        }
    }
    
    if (sum == 0) {
        printf("-1\n");
    } else {
        printf("%d\n", sum);
        printf("%d\n", min);
    }
    
    return 0;
}