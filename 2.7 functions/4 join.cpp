#include <iostream>
#include <string>
#include <vector>

std::string Join(const std::vector<std::string>& tokens, char delimiter) {
    std::string str;
    if (tokens.empty()){
        return str;
    }

    bool it_first = true;
    for(const std::string& word : tokens) {
        if(!it_first) {
            str.push_back(delimiter);
        }
        str += word;
        it_first = false;
    }

    return str;
}

int main () {
    std::cout << Join({"What", "is", "", "name?"}, '_') << std::endl;

    return 0;
}