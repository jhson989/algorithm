#include <cstdio>

int N;
int* num;
int oper[4];

long getMin(long now, long prev) {

    if (now == N)
        return prev;

    long min=1000000001, tmp;
    
    if (oper[0] > 0) {
        oper[0]--;
        tmp = getMin( now+1, prev + num[now] );
        oper[0]++;
        min = min < tmp ? min : tmp;
    }

    if (oper[1] > 0) {
        oper[1]--;
        tmp = getMin( now+1, prev - num[now] );
        oper[1]++;
        min = min < tmp ? min : tmp;
    }

    if (oper[2] > 0) {
        oper[2]--;
        tmp = getMin( now+1, prev * num[now] );
        oper[2]++;
        min = min < tmp ? min : tmp;
    }

    if (oper[3] > 0) {
        oper[3]--;
        tmp = getMin( now+1, prev / num[now] );
        oper[3]++;
        min = min < tmp ? min : tmp;
    }

    return min;
}

long getMax(long now, long prev) {

    if (now == N)
        return prev;

    long max=-1000000001, tmp;
    
    if (oper[0] > 0) {
        oper[0]--;
        tmp = getMax( now+1, prev + num[now] );
        oper[0]++;
        max = max > tmp ? max : tmp;
    }

    if (oper[1] > 0) {
        oper[1]--;
        tmp = getMax( now+1, prev - num[now] );
        oper[1]++;
        max = max > tmp ? max : tmp;
    }

    if (oper[2] > 0) {
        oper[2]--;
        tmp = getMax( now+1, prev * num[now] );
        oper[2]++;
        max = max > tmp ? max : tmp;
    }

    if (oper[3] > 0) {
        oper[3]--;
        tmp = getMax( now+1, prev / num[now] );
        oper[3]++;
        max = max > tmp ? max : tmp;
    }

    return max;
}

int main(void) {

    scanf("%d", &N);
    num = new int[N];
    for (int i=0; i<N; i++) {
        scanf("%d", &num[i]);
    }

    scanf("%d %d %d %d", &oper[0], &oper[1], &oper[2], &oper[3]);
    printf("%d %d\n", (int)getMax(1, num[0]), (int)getMin(1, num[0]));

    return 0;
}

