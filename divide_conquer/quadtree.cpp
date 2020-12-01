#include <cstdio>

char map[64][64]={};
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

void get_num(int fromX, int toX, int fromY, int toY) {
   

    if (check(fromX, toX, fromY, toY) == true) {
        
        if (map[fromX][fromY] == '1') {
            printf("1");
            return;
        } else {
            printf("0");
            return;
        }
    }

    if ( (toX - fromX) == 1)
        return;

    printf("(");
    get_num (fromX, (fromX+toX)/2, fromY, (fromY+toY)/2);
    get_num (fromX, (fromX+toX)/2, (fromY+toY)/2, toY);
    get_num ((fromX+toX)/2, toX, fromY, (fromY+toY)/2);
    get_num ((fromX+toX)/2, toX, (fromY+toY)/2, toY);
    printf(")");
    
}

int main(void) {

    char t;
    scanf("%d", &N);
    for (int i=0; i<N; i++) {
        scanf("%c", &t);
        for (int j=0; j<N; j++)
            scanf("%c", &map[i][j]);
    }
        

    get_num(0, N, 0, N);
    return 0;
}