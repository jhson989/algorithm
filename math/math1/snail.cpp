#include <cstdio>

int main(void) {

    int A, B, V;
    scanf("%d %d %d", &A, &B, &V);

    if ((V-A)%(A-B) == 0)
        printf("%d\n", (V-A)/(A-B)+1);
    else
        printf("%d\n", (V-A)/(A-B)+2);
    return 0;
}
