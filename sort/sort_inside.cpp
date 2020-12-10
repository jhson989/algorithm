#include <stdio.h>
#include <iostream>
#include <list>
#include <string>
#include <iterator>

bool comp(std::string a, std::string b) {

    if (a.size() < b.size()) 
        return true;
    else if (a.size() > b.size())
        return false;
    else {
        return a<b;

    }

}

int main(void) {
    int N;
    std::string tmp;
    std::list<std::string> words;
    scanf("%d", &N);
    for (int i=0; i<N; i++) {
        
        std::cin >> tmp;
        words.push_back(tmp);
    }
    words.sort(comp);
    for (std::list<std::string>::iterator iter = words.begin(); std::next(iter) != words.end(); iter++){
        if (*iter == *std::next(iter))
            continue;
        std::cout << *iter << std::endl;
    }
    std::cout<<words.back()<<std::endl;
    return 0;
}