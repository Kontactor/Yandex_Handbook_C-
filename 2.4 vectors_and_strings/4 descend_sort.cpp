#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> words;
    std::string word;
    char c;

    while ((c = getchar()) != EOF) {
        if (c != '\n') {
            word += c;
        }
        else {
            words.push_back(word);
            word.clear();
        }
    }

    std::sort(words.rbegin(), words.rend());

    for (std::string c : words) {
        std::cout << c << std::endl;
    }

    return 0;
}