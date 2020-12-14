#include <cstdio>
#include <cstring>

char word[101];
int begin=0, end=0, num=0;

int main(void) {

    
    scanf("%s", word);

    while (begin < strlen(word)) {
        if ( begin+1 < strlen(word) && word[begin] == 'c' && word[begin+1] =='=' ) {
            num++;begin+=2;continue;
        }
        if ( begin+1 < strlen(word) && word[begin] == 'c' && word[begin+1] =='-' ) {
            num++;begin+=2;continue;
        }
        if ( begin+2 < strlen(word) && word[begin] == 'd' && word[begin+1] =='z' && word[begin+2] =='=' ) {
            num++;begin+=3;continue;
        }
        if ( begin+1 < strlen(word) && word[begin] == 'd' && word[begin+1] =='-' ) {
            num++;begin+=2;continue;
        }
        if ( begin+1 < strlen(word) && word[begin] == 'l' && word[begin+1] =='j' ) {
            num++;begin+=2;continue;
        }
        if ( begin+1 < strlen(word) && word[begin] == 'n' && word[begin+1] =='j' ) {
            num++;begin+=2;continue;
        }
        if ( begin+1 < strlen(word) && word[begin] == 's' && word[begin+1] =='=' ) {
            num++;begin+=2;continue;
        }
        if ( begin+1 < strlen(word) && word[begin] == 'z' && word[begin+1] =='=' ) {
            num++;begin+=2;continue;
        }

        num++;
        begin+=1;
    }
    printf("%d\n", num);

    return 0;
}
