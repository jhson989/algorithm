#include <cstdio>
#include <cstring>

int N, M;
int* map,* spread;

void do_spread(int i, int j) {

    if (i < 0 || i >= N || j < 0 || j >= M)
        return;
    
    if (spread[i*M+j] == 0) {
        spread[i*M+j] = 2;
        do_spread(i-1, j);
        do_spread(i+1, j);
        do_spread(i, j-1);
        do_spread(i, j+1);
    }
}

int get_max() {

    memcpy(spread, map, N*M*sizeof(int));

    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            if (map[i*M+j]==2) {
                do_spread(i-1, j);
                do_spread(i+1, j);
                do_spread(i, j-1);
                do_spread(i, j+1);
            }
        }
    }

    int num = 0;
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            if (spread[i*M+j]==0) {
                num++;
            }
        }
    }

   

    return num;
}

int make_wall(int num, int startX, int startY) {
    
    if (num == 4) {    
        return get_max();
    }
    int max = 0;

    for (int i=startX; i<N; i++) {
        for (int j=startY; j<M; j++) {
            if (map[i*M+j] == 0) {
                map[i*M+j] = 1;
                int y = (i == startY ? startY: 0);
                int t = make_wall(num+1, i, y);
                max = max > t ? max : t;
                map[i*M+j] = 0;
            }           
        }
    }
    return max;
}

int main(void){

    scanf("%d %d", &N, &M);
    map = new int[N*M];
    spread = new int[N*M];
    int t;
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            scanf("%d", &t);
            map[i*M+j] = t;
        }
    }

    int max = make_wall(1, 0, 0);
    printf("%d\n", max);

    return 0;
}



