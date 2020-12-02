#include <cstdio>
#include <algorithm>

int main(void) {

    int n[3];

    while (true) {
        scanf("%d %d %d", &n[0], &n[1], &n[2]);
        if (n[0] == 0 && n[1] == 0 && n[2] == 0 )
            break;
        std::sort(n, n+3);
        if (n[2]*n[2] == n[0]*n[0] + n[1]*n[1])
            printf("right\n");
        else
            printf("wrong\n");
    }

    return 0;
}