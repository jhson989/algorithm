#include <cstdio>
#include <algorithm>
int n, k;
int v[100];
unsigned int result[2][10001] = {0};

void get(int now, int coin) {
    for (int i=0; i<=k; i++) {
        result[now][i] = result[(int)(!now)][i];
        //if (i-v[coin]>=0)
        //    result[now][i] += result[(int)(!now)][i-v[coin]];
        if (i-v[coin]>=0) 
            result[now][i] += result[now][i-v[coin]];   

    }

}

int main(void) {

    scanf("%d %d", &n, &k);
    for (int i=0; i<n; i++) scanf("%d", &v[i]);
    std::sort(v, v+n);
    result[0][0] = 1;
    result[1][0] = 1;
    int now = 1;
    for (int i=0; i<n; i++) {
        get(now, i);
        now = !now;
    }
    printf("%u\n", result[!now][k]);


    return 0;
}
