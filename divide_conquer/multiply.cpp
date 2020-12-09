#include <cstdio>

unsigned long long int a, b, c;

unsigned long long int multiply(int now) {

    if (now == 1)
        return (a%c);

    if (now % 2 == 1) {
        unsigned long long int result = multiply(now/2);
        return ((result * result % c) * a)%c;
    } else {
        unsigned long long int result = multiply(now/2);
        return (result * result % c);
    }

}

int main(void) {
    

    scanf("%llu %llu %llu", &a, &b, &c);
    printf("%llu\n", multiply(b));
    return 0;
}