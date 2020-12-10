#include <stdio.h>

int c2[10];
int c1[10];
int s[20][20];
int N, total=0;

inline void find() {
    int num=0;
    for (int i=0; i<N; i++){
        bool in=false;
        for (int j=0; j<N/2; j++) {
            if (i==c1[j]) {
                in = true;
                break;
            }
        }
        if (in==false){
            c2[num++] = i;
        }
    }
}


int choose(int now, int num) {

    if (N-now-1 < N/2-num)
        return 100000 ;

    if (num == N/2) {
        find();
        int v1=0, v2=0;
        for (int i=0; i<N/2; i++) {
            for (int j=0; j<N/2; j++) {
                if (i!=j){
                    v1 += s[c1[i]][c1[j]];
                }
            }
        }

        for (int i=0; i<N/2; i++) {
            for (int j=0; j<N/2; j++) {
                if (i!=j){
                    v2 += s[c2[i]][c2[j]];
                }
            }
        }

        return v1-v2 > v2-v1 ? v1-v2 : v2-v1;
    }

    int min = 100000, t;
    
    t = choose(now+1, num);
    min = (min>t?t:min);

    c1[num]=now;
    t = choose(now+1, num+1);
    min = (min>t?t:min);

    return min;
}

int main(void) {


    scanf("%d", &N);
    for (int i=0; i<N; i++)
        for (int j=0; j<N; j++) {
            scanf("%d", &s[i][j]);
            total += s[i][j];
        }

    printf("%d\n", choose(0, 0));

    return 0;
}