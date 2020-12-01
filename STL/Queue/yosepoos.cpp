#include <cstdio>
#include <queue>


using namespace std;

int main(void) {
    int N, K, i;
    queue<int> q;
    scanf("%d %d", &N, &K);
    for (int i=1; i<=N; i++)
        q.push(i);
    printf("<");
    while (q.size() != 0) {
        for (i=0; i<K-1; i++){
            q.push(q.front());
            q.pop();    
        }
        if (q.size() != 1)
            printf("%d, ", q.front());
        else 
            printf("%d", q.front());
        q.pop();
    }
    printf(">");
    return 0;
}