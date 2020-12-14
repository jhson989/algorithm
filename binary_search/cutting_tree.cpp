#include <cstdio>

int N, M, MAX=0;
int* len;
int result=0;

void search(int from, int to) {

    if (to < from)
        return;
    
    if (from == to) {
        unsigned long long int t=0;
        for (int i=0; i<N; i++) {
            t += (len[i]-from > 0 ? len[i]-from : 0);
        }
        if (t >= (unsigned long long int)M)
            result = result > from ? result : from;
        return;
    }

    unsigned long long int t=0;
    int mid = (from+to)/2;
    for (int i=0; i<N; i++) {
        t += (len[i]-mid > 0 ? len[i]-mid : 0);
    }

    if (t >= (unsigned long long int)M) {
        search(mid+1, to);
        result = result > mid ? result : mid;
    }
    else
        search(from, mid-1);
    
}

int main(void) {
    scanf("%d %d", &N, &M);
    len = new int[N];
    for (int i=0; i<N; i++) {
        scanf("%d", &len[i]);
        MAX = MAX > len[i] ? MAX : len[i];
    }
    
    search(0, MAX);
    printf("%d\n", result);
    return 0;
}