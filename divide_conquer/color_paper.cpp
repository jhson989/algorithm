#include <cstdio>

int map[128][128]={};
int N;

inline bool check(int fromX, int toX, int fromY, int toY) {

    for (int i=fromX; i<toX; i++) {
        for (int j=fromY; j<toY; j++){
            if (map[fromX][fromY] != map[i][j])
                return false;
        }
    }
    return true;
}

void get_num(int &nw, int &nb, int fromX, int toX, int fromY, int toY) {
   

    if (check(fromX, toX, fromY, toY) == true) {
        
        if (map[fromX][fromY] == 1) {
            nb++;
            return;
        } else {
            nw++;
            return;
        }
    }

    if ( (toX - fromX) == 1)
        return;

    get_num(nw, nb, fromX, (fromX+toX)/2, fromY, (fromY+toY)/2);
    get_num(nw, nb, fromX, (fromX+toX)/2, (fromY+toY)/2, toY);
    get_num(nw, nb, (fromX+toX)/2, toX, fromY, (fromY+toY)/2);
    get_num(nw, nb, (fromX+toX)/2, toX, (fromY+toY)/2, toY);
    
}

int main(void) {

    scanf("%d", &N);
    for (int i=0; i<N; i++)
        for (int j=0; j<N; j++)
            scanf("%d", &map[i][j]);

    int nw=0, nb=0;
    get_num(nw, nb, 0, N, 0, N);
    printf("%d\n%d\n", nw, nb);

    return 0;
}