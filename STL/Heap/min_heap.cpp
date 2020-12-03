#include <cstdio>
#include <queue>
#include <functional>


int main(void) {

    std::priority_queue<int, std::vector<int>, std::greater<int>> pq;
    int N, cmd;

    scanf("%d", &N);

    for (int i=0; i<N; i++) {
        scanf("%d",&cmd);
        if (cmd == 0) {
            if (pq.size() == 0) {
                printf("0\n");
            } else {
                printf("%d\n", pq.top());
                pq.pop();
            }
            
        } else {
            pq.push(cmd);
        }
    }
    return 0;
}
