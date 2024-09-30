#include <iostream>
#include <string>
#include <vector>

std::string CommonPrefix(const std::vector<std::string>& words) {
    std::string prefix;
    if (words.empty()) {
        return prefix;
    }
    prefix = words[0];
    for (const std::string& word : words) {
        if (word.empty()) {
            prefix.clear();
            return prefix;
        }
        prefix.resize(word.size());
        for (size_t i = 0; i != prefix.size() && i != word.size(); ++i) {
            if(prefix.at(i) != word.at(i)) {
                prefix.resize(i);                
                break;
            }
        }
    }
    return prefix;
}

int main () {
    std::vector<std::string> words = {"passed", "passedsed", "pass", "passedsed"};
    std::cout << CommonPrefix(words);
    return 0;
}