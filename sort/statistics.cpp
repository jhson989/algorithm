#include <cstdio>

int m[8001] = {};

int main(void) {

    int N, t, num=-1, max=-4000, min=4000, most=0, most_i=0;
    double sum=0;
    scanf("%d", &N);


    for (int i=0; i<N; i++) {
        scanf("%d", &t);
        m[4000+t]++;
        sum += t;
        max = max > t ? max : t;
        min = min < t ? min : t;
    }
    
    t=0;
    do {
        num++;
        t += m[num];
    } while (t<(N/2+1) && num < 8000);

    int now = 0;
    for (int i=0; i<=8000; i++) {
        if (most == m[i] && now <2) {
            most = m[i];
            most_i = i;
            now++;
        }
        else if (most < m[i]) {
            most = m[i];
            most_i = i;
            now=1;
        }

    }

    printf("%.0lf\n", (sum)/N);
    printf("%d\n", (num-4000));
    printf("%d\n", (most_i-4000));
    printf("%d\n", (max-min));

    return 0;
}
