#include <cstdio>
#include <climits>
#include <algorithm>
int N, C;
int *pos;
int max_dis=0;

void get_dis(int pre_dis, int now_dis) {
    if (pre_dis == now_dis || now_dis == 0)
        return ;

    int num=0;
    int start = pos[0];
    for (int i=1; i<N; i++) {
        if (pos[i]-start >= now_dis) {
            num++;
            start = pos[i];
        }
        if (num == C-1)
            break;
    }
    if (num == C-1) {
        max_dis = max_dis > now_dis ? max_dis : now_dis;
        if (pre_dis-1 != now_dis)
            get_dis(pre_dis, (pre_dis+now_dis)/2);
    } else {
        get_dis(now_dis, (now_dis)/2);
    }

}

int main(void) {
    scanf("%d %d", &N, &C);
    pos = new int[N];

    for (int i=0; i<N; i++) scanf("%d", &pos[i]);
    std::sort(pos, pos+N);

    if (C == 2){
        printf("%d\n", pos[N-1]-pos[0]);
    } else {
        get_dis(pos[N-1]-pos[0], (pos[N-1]-pos[0])/2);
        printf("%d\n", max_dis);
    }

    return  0;
}
