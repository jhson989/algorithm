#include <cstdio>
#include <climits>

int K, N;
unsigned int len[10000];
unsigned int result=0;

// Binaray search : (a <= <= b) -> (mid+1 <=  <= b) or (a <=  <= mid-1) 
// base case: (a == b) or (a > b)

void search (unsigned int min, unsigned int max) {

    if (max < min)
        return;

    if (min == max) {
        unsigned int t=0;
        for (int i=0; i<K && t<N; i++) 
            t += len[i]/min;
        if (t >= N)
            result = result > min ? result : min;
        return;
    }

    unsigned int mid = (min+max)/2;
    unsigned int t=0;
    for (int i=0; i<K && t<N; i++) 
        t += len[i]/mid;
    
    if (t >= N) {
        result = result > mid ? result : mid;
        search(mid+1, max);
    } else {
        search(min, mid-1);
    }


    return ;
}

int main(void) {

    scanf("%d %d", &K, &N);
    unsigned int max=1;
    for (int i=0; i<K; i++) {
        scanf("%d", &len[i]);
        max = max > len[i] ? max : len[i];
    }

    search(1, max);
    printf("%u\n", result);
    
    return 0;
}
