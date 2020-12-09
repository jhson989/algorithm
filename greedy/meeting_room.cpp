#include <cstdio>
#include <utility>
#include <algorithm>

int N;
std::pair<unsigned int, unsigned int>* t;

bool compare (const std::pair<unsigned int, unsigned int>& a, const std::pair<unsigned int, unsigned int>& b) {
    if (a.second < b.second)
        return true;
    else if (a.second > b.second)
        return false;
    else {
        return (a.first < b.first) ;
    }
}

int main(void) {

    scanf("%d", &N);
    t = new std::pair<unsigned int, unsigned int>[N];
    for (int i=0; i<N; i++) scanf("%u %u", &t[i].first, &t[i].second);

    std::sort(t, t+N, compare);

    unsigned int time=0, num=0;
    for (int i=0; i<N; i++)
        if (time <= t[i].first) {
            time = t[i].second;
            num++;
        }

    printf("%u\n", num);

    return 0;
}
