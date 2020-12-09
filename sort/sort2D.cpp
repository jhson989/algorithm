#include <cstdio>
#include <utility>
#include <algorithm>


int N;
std::pair<int, int>* m;

bool comp(std::pair<int, int>& a, std::pair<int, int>& b) {
    if (a.first < b.first)
        return true;
    else if (a.first == b.first) {
        if (a.second < b.second)
            return true;
        else 
            return false;
    }
    else
        return false;
}

int main(void) {

    scanf("%d", &N);
    m = new std::pair<int, int>[N];
    for (int i=0; i<N; i++)
        scanf("%d %d", &m[i].second, &m[i].first);
    std::sort(m, m+N, comp);
    
    for (int i=0; i<N; i++)
        printf("%d %d\n", m[i].second, m[i].first);

    return 0;
}
