#include <cstdio>
#include <cstdlib>
int N, t;

void print(int num) {

    bool* not_prime = new bool[num+1]();
    not_prime[0] = true;
    not_prime[1] = true;
    int m=0;
    for (int i=2; i<=num; i++) {
        m=i*2;
        if (not_prime[i]==false) {
            while(m<=num) {
                not_prime[m] = true;
                m += i;
            }
        }
    }

    int min = num;
    int t1, t2;
    for (int i=2; i<num; i++) {
        if (not_prime[i] == false && not_prime[num-i] == false) {
            if (min > abs(num-2*i)) {
                min = abs(num-2*i);
                t1 = i < num-i ? i : num-i;
                t2 = i > num-i ? i : num-i;
            }
        }
    }
    printf("%d %d\n", t1, t2);

    delete [] not_prime; 
}

int main(void) {

    scanf("%d", &N);

    for (int i=0; i<N; i++) {
        scanf("%d", &t);
        print(t);
    }

    return 0;
}
