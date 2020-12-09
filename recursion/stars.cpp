#include <cstdio>
#include <cstdlib>
bool** m;
int N;

void point (int fx, int tx, int fy, int ty) {

    if (tx-fx == 1) {
        m[fx][fy] = true;
        return;   
    }

    point ( fx, (2*fx+tx)/3,            fy, (2*fy+ty)/3 );
    point ( fx, (2*fx+tx)/3,            (2*fy+ty)/3, (fy+2*ty)/3 );
    point ( fx, (2*fx+tx)/3,            (fy+2*ty)/3, ty );

    point ( (2*fx+tx)/3, (fx+2*tx)/3,   fy, (2*fy+ty)/3 );
    point ( (2*fx+tx)/3, (fx+2*tx)/3,   (fy+2*ty)/3, ty );

    point ( (fx+2*tx)/3, tx,            fy, (2*fy+ty)/3 );
    point ( (fx+2*tx)/3, tx,            (2*fy+ty)/3, (fy+2*ty)/3 );
    point ( (fx+2*tx)/3, tx,            (fy+2*ty)/3, ty );

}
int main(void) {

    scanf("%d", &N);
    m = new bool*[N];
    for (int i=0; i<N; i++)
        m[i] = new bool[N]();

    point(0, N, 0, N);

    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            if (m[i][j]==true)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}
