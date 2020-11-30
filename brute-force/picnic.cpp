#include <cstdio>
#include <vector>
#include <algorithm>

int K, N, F;
bool* areFriends;
int* output;

bool all_friends(int idx, int candi) {

    for (int i=0; i<idx; i++) {
        if (areFriends[candi*(N+1) + output[i]] == false) {
            return false;
        }

    }
    return true;
}

bool make_friends(int idx, int min){ {

    if (idx == K) {
        return true;
    }
    
    for (int i=min+1; i<=N; i++){
        if (all_friends(idx, i) == true) {
            output[idx] = i;
            if (make_friends(idx+1, i) == true) {                
                return true;
            }
        }
    }

    return false;

}}


int main(void) {

    scanf("%d %d %d", &K, &N, &F);
    areFriends = new bool[(N+1)*(N+1)]();
    output = new int[K]();
    
    int a, b;
    for (int i=0; i<F; i++) {
        scanf("%d %d", &a, &b);
        areFriends[a*(N+1) + b] = true;
        areFriends[b*(N+1) + a] = true;
    }
    bool made = make_friends(0, 0);

    if (made == true) {
        for (int i=0; i<K; i++)
            printf("%d\n", output[i]);
    } else { 
        printf("-1\n");
    }
    return 0;
}