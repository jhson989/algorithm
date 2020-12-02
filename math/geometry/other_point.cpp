#include <cstdio>

int main(void) {

    int x[4];
    int y[4];

    scanf("%d %d", &x[0], &y[0]);
    scanf("%d %d", &x[1], &y[1]);
    scanf("%d %d", &x[2], &y[2]);

    if (x[0] == x[1]) printf("%d ",x[2]);
    if (x[0] == x[2]) printf("%d ",x[1]);
    if (x[1] == x[2]) printf("%d ",x[0]);


    if (y[0] == y[1]) printf("%d\n",y[2]);
    if (y[0] == y[2]) printf("%d\n",y[1]);
    if (y[1] == y[2]) printf("%d\n",y[0]);


    return 0;
}