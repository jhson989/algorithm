#include <stdio.h>
#include <stack>

using namespace std;

int main(void) {

    int K, t;
    stack<int> s;
    scanf("%d", &K);

    for (int i=0; i<K; i++) {
        scanf("%d", &t);
        if (t==0){
            s.pop();
        } else {
            s.push(t);
        }
    }

    int sum = 0;
    while (!s.empty()) {
        sum += s.top();
        s.pop();
    }
    printf("%d\n", sum);
    return 0;
}