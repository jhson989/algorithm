#include <cstdio>
int N, num=0, t;

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
    while(N--) {
        scanf("%d", &t);
        num += (int)find_prime(t);
    }
    printf("%d\n", num);

    return 0;
}