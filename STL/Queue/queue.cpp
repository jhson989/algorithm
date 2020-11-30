#include <iostream>
#include <queue>
#include <string>
#include <string.h> 

using namespace std;

int main(){
	queue<int> q;
    int N, t;
    char cmd[10] = {};
    cin >> N;


    for (int i=0; i<N; i++) {
        scanf("%s", cmd);
        if (strcmp(cmd, "push")==0) {
            scanf("%d", &t);
            q.push(t);
        } else if (strcmp(cmd, "pop")==0) {
            printf("%d\n", (q.empty() ? -1 : q.front()));
            if (!q.empty())
                q.pop();
        } else if (strcmp(cmd, "size")==0) {
            printf("%d\n", q.size());
        } else if (strcmp(cmd, "empty")==0) {
            printf("%d\n", q.empty());
        } else if (strcmp(cmd, "front")==0) {
            printf("%d\n", (q.empty() ? -1 : q.front()));
        } else if (strcmp(cmd, "back")==0) {
            printf("%d\n", (q.empty() ? -1 : q.back()));
        }
    }

    return 0;
}