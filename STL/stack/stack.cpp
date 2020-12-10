#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void) {

    std::stack<int> s;
    int N, n;
    string cmd;
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> cmd;

        if (cmd == "push") {
            cin>> n;
            s.push(n);
        } else if (cmd == "pop") {
            cout << (s.empty() ? -1 : s.top()) << endl;
            if (s.empty() == false)
                s.pop();
        } else if (cmd == "size") {
            cout << s.size() << endl;
        } else if (cmd == "empty") {
            cout << (int)s.empty() << endl;
        } else if (cmd == "top") {
            cout << (s.empty() ? -1 : s.top()) << endl;
        }

    }


    return 0;
}