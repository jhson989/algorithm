#include <cstdlib>
#include <cstdio>
#include <algorithm>
#include <queue>
#include <functional>

std::priority_queue<int, std::vector<int>, std::less<int>> smaller;
std::priority_queue<int, std::vector<int>, std::greater<int>> bigger;
int median;

int main(void) {

    int N, t;
    scanf("%d", &N);
    scanf("%d", &median);
    printf("%d\n", median);

    for (int i=1; i<N; i++) {
        scanf("%d", &t);

        if (t < median)
            smaller.push(t);
        else
            bigger.push(t);

        if (smaller.size() > bigger.size()) {
            bigger.push(median);
            median = smaller.top();
            smaller.pop();
        }

        if (smaller.size()+1 < bigger.size()) {
            smaller.push(median);
            median = bigger.top();
            bigger.pop();
        }

        printf("%d\n", median);
    }

    return 0;
}
