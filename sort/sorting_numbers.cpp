#include <stdio.h>
#include <algorithm>

int main(void) {

    int N;
    int *num;
    scanf("%d", &N);
    num = new int[N];
    for(int i=0; i<N; i++)
        scanf("%d", &num[i]);

    std::sort(num, num+N);
    for(int i=0; i<N; i++)
        printf("%d\n", num[i]);

    delete [] num;
    return 0;
}
