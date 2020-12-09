#include <cstdio>
#include <cstdlib>
int N;
int m[3000][3000];
int n[3] = {0,0,0}; // n[0] for -1, n[1] for 0, n[1] for 1;

inline bool check(int fx, int tx, int fy, int ty) {
    for (int i=fx; i<=tx; i++)
        for (int j=fy; j<=ty; j++)
            if (m[i][j] != m[fx][fy])
                return false;
    return true;
}

void num(int fx, int tx, int fy, int ty){

    if (fx==tx && fy==ty) { // 1*1 크기 box 에 대해서 확인
        n[ 1+m[fx][fy] ]++;  // n[0] for -1, n[1] for 0, n[1] for 1;
        return;
    }
        
    
    if (check(fx, tx, fy, ty) ) { // (tx-fx+1)*(fy-fy+1) 크기 box 에 대해서 확인
        n[ 1+m[fx][fy] ]++; // n[0] for -1, n[1] for 0, n[1] for 1;
        return;
    }
    
    else { // divide

        if (tx == 0)
            exit(1);

        num( fx, (2*fx+tx)/3,                fy, (2*fy+ty)/3 );
        num( (2*fx+tx)/3+1, (fx+2*tx)/3,     fy, (2*fy+ty)/3 );
        num( (fx+2*tx)/3+1, tx,              fy, (2*fy+ty)/3 );

        num( fx, (2*fx+tx)/3,               (2*fy+ty)/3+1, (fy+2*ty)/3 );
        num( (2*fx+tx)/3+1, (fx+2*tx)/3,    (2*fy+ty)/3+1, (fy+2*ty)/3 );
        num( (fx+2*tx)/3+1, tx,             (2*fy+ty)/3+1, (fy+2*ty)/3 );

        num( fx, (2*fx+tx)/3,               (fy+2*ty)/3+1, ty );
        num( (2*fx+tx)/3+1, (fx+2*tx)/3,    (fy+2*ty)/3+1, ty );
        num( (fx+2*tx)/3+1, tx,             (fy+2*ty)/3+1, ty );

    }

}

int main(void) {

    scanf("%d", &N);
    for (int i=0; i<N; i++) for (int j=0; j<N; j++) scanf("%d", &m[i][j]);

    num( 0,N-1, 0,N-1 );
    printf("%d\n%d\n%d\n", n[0], n[1], n[2]);

    return 0;
}
