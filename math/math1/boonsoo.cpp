#include <cstdio>

int X, idx, first;

int main(void) {

    scanf("%d", &X);

    if (X == 1) {
        printf("1/1");
        return 0;
    }

    idx = 2;
    while (1+ idx*(idx-1)/2 <= X) {
        idx ++;
    }
    idx--;
    first = idx*(idx-1)/2 + 1;
    
    if (idx%2 == 0)
        printf("%d/%d", (1+(X-first)) ,  (idx - (X-first)));
    if (idx%2 != 0)
        printf("%d/%d",  (idx - (X-first)) , (1+(X-first)) );

    return 0;
}
