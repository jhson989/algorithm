#include <cstdio>
#include <algorithm>

int N, M;
int A[100000];

bool find_num(int num, int from, int to) {
    if (from == to) {
        return A[from] == num;
    }

    if (A[(from+to)/2] < num)
        return find_num(num, (from+to)/2+1, to);
    else if (A[(from+to)/2] > num)
        return find_num(num, from, (from+to)/2-1);
    else 
        return true;
}

int main(void) {

    scanf("%d", &N);
    for (int i=0; i<N; i++) scanf("%d", &A[i]);

    std::sort(A, A+N);

    scanf("%d", &M);
    int num;
    for (int i=0; i<M; i++) {
        scanf("%d", &num);
        printf("%d\n", find_num(num, 0, N-1));
    }

    return 0;
}