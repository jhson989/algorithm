#include <cstdio>
#include <algorithm>
#include <vector>

std::vector<int> pq;

void myI(int num) {
    std::vector<int>::iterator iter;

    for (iter = pq.begin(); iter != pq.end(); iter++) {
        if (*iter > num) 
            break;
    }

    pq.insert((iter), num);

}

int main(void) {

    int N, t;
    scanf("%d", &N);

    for (int i=0; i<N; i++) {
        scanf("%d", &t);
        myI(t);

        if (i % 2 == 0) {
            printf("%d\n", pq[i/2]);
        } else {
            printf("%d\n", pq[i/2] > pq[i/2+1] ? pq[i/2+1]: pq[i/2]);
        }
    }

    return 0;
}
