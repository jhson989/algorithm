#include <cstdio>

int count[27] = {0};

int main(void) {

    char word=0;

    while (true) {
        scanf("%c", &word);
        if (word == '\n')
            break;
        if (word >= 'a')
            word = word-'a'+'A';
        count[(word-'A')]++;
    }

    int max = 0;
    int num = 0;
    int idx;

    for (int i=0; i<27; i++) {
        if (max < count[i]) {
            max = count[i];
            idx = i;
            num=1;
        } else if (max == count[i]) {
            num++;
        }
    }

    if (num == 1) {
        printf("%c\n", 'A'+idx);
    } else {
        printf("?\n");
    }

    return 0;
}
