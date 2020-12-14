#include <iostream>
#include <string>
#include <iterator>
#include <vector>

using namespace std;
string equation;
vector<int> num;
vector<char> oper;

void parse() {

    auto start=equation.begin();
    auto iter=equation.begin();
    for (iter=equation.begin() ; iter!=equation.end(); iter++) {
        if (*iter == '+' || *iter == '-') {
            oper.push_back(*iter);
            num.push_back( atoi( equation.substr( start-equation.begin(), iter-start ).c_str() ) );
            start = iter+1;
        }
    }
    num.push_back( atoi( equation.substr( start-equation.begin(), iter-start ).c_str() ) );
}

void num_plus() {

    for (int i=0; i<oper.size(); i++){
        if (oper[i] == '+') {
            oper.erase(oper.begin()+i);
            num[i] += num[i+1];
            num.erase(num.begin()+i+1);
            i--;
        }
    }
}

void num_minus() {

    for (int i=0; i<oper.size(); i++){
        oper.erase(oper.begin()+i);
        num[i] -= num[i+1];
        num.erase(num.begin()+i+1);
        i--;
    }
}


int main(void) {

    cin >> equation;
    parse();
    num_plus();
    num_minus();

    printf("%d\n", num[0]);

    return 0;
}
