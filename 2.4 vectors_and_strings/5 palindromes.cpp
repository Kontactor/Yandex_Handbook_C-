#include <iostream>
#include <string>

std::string DeleteSpaces(const std::string& text) {
    std::string text_without_spaces;
    for (const char c : text) {
        if (c != ' ') {
            text_without_spaces += c;
        }
    }
    return text_without_spaces;
}

bool IsTextPalindrome(const std::string& text) {
    std::string text_without_spaces = DeleteSpaces(text);
    if(text_without_spaces.size() < 2){
        return true;
    } else {
        for (size_t i = 0; i < text_without_spaces.size() / 2; ++i) {
            if(text_without_spaces.at(i) != text_without_spaces.at(text_without_spaces.size() - i - 1)) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    std::string text;
    std::getline(std::cin, text);

    if(IsTextPalindrome(text)) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}