
#include <utility>
#include <cstdio>
#include <algorithm>

int N;
int m[100];
std::pair<int, int> line[100];

bool compare(std::pair<int, int> a, std::pair<int, int> b) {
    return a.first < b.first;
}
#define less(x, y) (x.first < y.first && x.second < y.second)

int main(void) {

    scanf("%d", &N);
    for (int i=0; i<N; i++) {
        scanf("%d %d", &line[i].first, &line[i].second);
    }

    sort(line, line+N, compare);
    for (int i=0; i<N; i++) {
        int max = 1;
        for (int j=0; j<i; j++) {
            if (less(line[j],line[i]))
                max = max > m[j]+1 ? max : m[j]+1;
        }
        m[i] = max;
    }

    int max = 0;
    for (int i=0; i<N; i++) {
        max = max > m[i] ? max : m[i];
    }
    
    printf("%d\n", N-max);

    return 0;
}