#include <cstdio>
#include <algorithm>

int main(void) {

    int N, sum=0;
    int t[1000];

    scanf("%d", &N);

    for (int i=0; i<N; i++)
        scanf("%d", &t[i]);

    std::sort(t, t+N);
    
    for (int i=0; i<N; i++)
        sum += ( t[i]*(N-i) );

    printf("%d\n", sum);


    return 0;
}