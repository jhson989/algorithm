#include <iostream>
#include <queue>
#include <string>
#include <string.h> 

using namespace std;

int im[101]; 
int tc, N, target;

bool check (queue<int>& q) {

    for (int i=0; i<N; i++) {
        int now = (q.front()+i)%N;
        if (im[now] > im[q.front()])
            return false;
    }
    return true;
}

int main(){
    
    scanf("%d", &tc);
    
    while (tc--) {
        scanf("%d %d", &N, &target);
        queue<int> q;
        
        for (int i=0; i<N; i++) {
            q.push(i);
            scanf("%d", &im[i]);
        }

        int num=0;
        while (true) {
            if (check(q)) {
                int remove = q.front();
                q.pop();
                num++;
                im[remove] = -1;
                if (remove == target)
                    break;
                else
                    continue;
            }
            else {
                q.push(q.front());
                q.pop();
            }
        }
        printf("%d\n", num);
    }

    return 0;
}