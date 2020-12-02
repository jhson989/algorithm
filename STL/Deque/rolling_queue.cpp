#include <cstdio>
#include <deque>

std::deque<int> dq;
int N, M, t, oper=0;

inline bool check(int& t) {
    int idx = 0;

    while(dq[idx]!=t) {
        idx++;
    }
    return idx-0 < dq.size()-idx;

}

int main(void) {
    scanf("%d %d", &N, &M);

    for (int i=1; i<=N; i++) {
        dq.push_back(i);
    }

    for (int i=0; i<M; i++) {
        scanf("%d", &t);
        if (check(t) == true) {
            while (dq.front() != t) {
                oper++;
                dq.push_back(dq.front());
                dq.pop_front();
            }
            dq.pop_front();
        }
        else {
            while (dq.front() != t) {
                oper++;
                dq.push_front(dq.back());
                dq.pop_back();
            }
            dq.pop_front();
        }
    }
    printf("%d\n", oper);
    return 0;
}
