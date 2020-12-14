#include <string>
#include <iostream>
using namespace std;

int total, num=0;
string word;

bool check() {
    int board[27] = {0};
    char pre = ' ', now;

    for (int i=0; i<word.size(); i++){
        now = word[i];
        if (pre != now && board[now-'a'] != 0) {
            return false;
        }
            
        if (board[now-'a'] == 0)
            board[now-'a'] = 1;
        pre = now;
    }
    return true;
}


int main(void) {

    cin>>total;
    while(total--) {
        cin>>word;
        num += (int)check();
    }
    cout<<num<<"\n";

    return 0;
}
