#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> Split(const std::string& str, char delimiter) {
    std::vector<std::string> words;
    std::string word;
    if (str.empty()) {
        words.push_back(word);
        return words;
    }

    for (char c : str) {
        if(c == delimiter) {
            words.push_back(word);
            word.clear();
        } else {
            word += c;
        }
    }
    words.push_back(word);

    return words;
}

int main () {
    std::vector<std::string> words = Split("_What__is_your_name?_", '_');
    
    for (std::string& word : words) {
        std::cout << word << std::endl;
    }

    return 0;
}