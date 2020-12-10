#include <algorithm>
#include <cstdio>
#include <string>

struct profile {
    int num;
    char name[201];
};

int N;
struct profile *p;

bool num_sort(const struct profile& a, const struct profile& b) {
    return a.num < b.num;
}

int main(void) {

    scanf("%d", &N);
    p = new struct profile[N];
    for (int i=0; i<N; i++) {
        scanf("%d %s", &p[i].num, &p[i].name);
    }

    std::stable_sort(p, p+N, num_sort);

    for (int i=0; i<N; i++) {
        printf("%d %s\n", p[i].num, p[i].name);
    }

    delete [] p;
    return 0;
}

