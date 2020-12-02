#include <cstdio>
int N, M;

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
    scanf("%d %d", &M, &N);
    bool* not_prime = new bool[N]();
    not_prime[0] = true;
    not_prime[1] = true;
    int m=0;
    for (int i=2; i<=N; i++) {
        m=i*2;
        if (not_prime[i]==false) {
            while(m<=N) {
                not_prime[m] = true;
                m += i;
            }
        }
    }

    for (int i=M; i<=N; i++)
        if (not_prime[i]==false)
            printf("%d\n", i);


    return 0;
}