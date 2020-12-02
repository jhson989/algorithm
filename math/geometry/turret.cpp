#include <cstdio>

inline int len(int x1, int y1, int x2, int y2) {
    return (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
}

int main(void) {

    int N, x1, y1, r1, x2, y2, r2;
    scanf("%d", &N);
    while (N--) {
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

        if (x1==x2 && y1==y2 && r1==r2) {
            printf("-1\n");
            continue;
        } 
        else if ( len(x1, y1, x2, y2) == (r1+r2)*(r1+r2) || len(x1, y1, x2, y2) == (r1-r2)*(r1-r2) ) {
            printf("1\n");
            continue;
        }
        else if ( len(x1, y1, x2, y2) < (r1+r2)*(r1+r2) && len(x1, y1, x2, y2) > (r1-r2)*(r1-r2) ) {
            printf("2\n");
            continue;
        }
        
        else if ( len(x1, y1, x2, y2) > (r1+r2)*(r1+r2) || len(x1, y1, x2, y2) < (r1-r2)*(r1-r2)) {
            printf("0\n");
            continue;
        }
    }

    return 0;
}
