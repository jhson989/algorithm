#include <cstdio>
#include <cstring>
#include <deque>

int main(void) {

    std::deque<int> dq;
    int N, t;
    char cmd[20];

    scanf("%d", &N);

    for (int i=0; i<N; i++) {
        scanf("%s", cmd);
        if ( strcmp(cmd, "push_front") == 0 ) {
            scanf("%d", &t);
            dq.push_front(t);
        } else if ( strcmp(cmd, "push_back") == 0 ) {
            scanf("%d", &t);
            dq.push_back(t);
        } else if ( strcmp(cmd, "pop_front") == 0 ) {
            printf("%d\n", dq.empty() ? -1 : dq.front());
            if (!dq.empty())
                dq.pop_front();
        } else if ( strcmp(cmd, "pop_back") == 0 ) {
            printf("%d\n", dq.empty() ? -1 : dq.back());
            if (!dq.empty())
                dq.pop_back();
        } else if ( strcmp(cmd, "size") == 0 ) {
            printf("%d\n", (int)dq.size());
        } else if ( strcmp(cmd, "empty") == 0 ) {
            printf("%d\n", (int)dq.empty());
        } else if ( strcmp(cmd, "front") == 0 ) {
            printf("%d\n", dq.empty() ? -1 : dq.front());
        } else if ( strcmp(cmd, "back") == 0 ) {
            printf("%d\n", dq.empty() ? -1 : dq.back());
        }
    }

    return 0;
}