#include <cstdio>
#include <climits>
#include <utility>
#include <algorithm>

bool compare (std::pair<int, int> a, std::pair<int, int> b) {
    if (a.first == b.first)
        return a.second < b.second;
    else
        return a.first < b.first;
}

int N;
std::pair<int, int>* p;
int min = INT_MAX;

int main(void) {
    scanf("%d", &N);
    p = new std::pair<int, int>[N];

    for (int i=0; i<N; i++)
        scanf("%d %d", &p[i].first, &p[i].second);
    std::sort(p, p+N);



    return 0;
}
