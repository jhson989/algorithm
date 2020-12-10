#include <stdio.h>

int map[9][9];
bool exist[9][9];

bool check (int i, int j, int now) {

    for (int k=0; k<9; k++) {
        if (map[i][k] == now || map[k][j] == now)
            return false;
    }

    int tileX = i / 3;
    int tileY = j / 3;

    for (int tx=0; tx<3; tx++)
        for (int ty=0; ty<3; ty++) {
            if (map[tileX*3+tx][tileY*3+ty] == now)
                return false;
        }

    return true;
}

bool find(int num) {

    if ( num == 81 )
        return true;

    int i = num / 9;
    int j = num % 9;
    if (exist[i][j] == true) {
        return find(num+1);
    }

    for (int now=1; now<10; now++) {

        if ( check(i, j, now) == true ) {
            map[i][j] = now;
            if (find(num+1)) {
                return true;
            }
        }
    }

    map[i][j] = 0;
    return false;
}

int main(void) {

    for(int i=0; i<9; i++)
        for(int j=0; j<9; j++) {
            scanf("%d", &map[i][j]);
            exist[i][j] = (map[i][j] != 0 ? true : false);
        }
            

    find(0);

    printf("\n");
    for(int i=0; i<9; i++) {
        for(int j=0; j<9; j++)
            printf("%d ", map[i][j]);
        printf("\n");
    }


    return 0;
}