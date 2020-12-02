
#include <cstdio>
int a;

int eratos(int M, int N) {

    bool* not_prime = new bool[N+1]();
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
    int num = 0;
    for (int i=M; i<=N; i++)
        if (not_prime[i]==false)
            num++;
    delete [] not_prime;
    return num;

}

int main(void) {

    while (true) {
        scanf("%d", &a);
        if (a==0) {
            break;
        }
        printf("%d\n", eratos(a+1, 2*a));
    }


    return 0;
}