#include <iostream>
#include <string>

std::string DeleteSymbols(const std::string& word) {
    std::string newWord;
    newWord += word.front();
    for (size_t c = 1; c != word.size(); ++c) {
        if (word[c] != 'a' && word[c] != 'e' && word[c] != 'h' && word[c] != 'i' && word[c] != 'o' 
            && word[c] != 'u' && word[c] != 'w' && word[c] != 'y') {
            newWord += word[c];
        }
    }
    return newWord;
}

std::string ReplaceCharToDigits(std::string word) {
    for (size_t c = 1; c != word.size(); ++c) {
        if (word[c] == 'b' || word[c] == 'f' || word[c] == 'p' || word[c] == 'v') {
            word.replace(c, 1, "1");
        }
        if (word[c] == 'c' || word[c] == 'g' || word[c] == 'j' || word[c] == 'k' 
             || word[c] == 'q' || word[c] == 's' || word[c] == 'x' || word[c] == 'z') {
            word.replace(c, 1, "2");
        }
        if (word[c] == 'd' || word[c] == 't') {
            word.replace(c, 1, "3");
        }
        if (word[c] == 'l') {
            word.replace(c, 1, "4");
        }
        if (word[c] == 'm' || word[c] == 'n') {
            word.replace(c, 1, "5");;
        }
        if (word[c] == 'r') {
            word.replace(c, 1, "6");
        }  
    }
    return word;
}

std::string DeleteDuplicate(const std::string& word) {
    std::string newWord;

    newWord += word[0];

    for (char c : word) {
        if (c != newWord.back()) {
            newWord.push_back(c);
        }        
    }
    return newWord;
}

std::string MakeLengthFour(std::string word) {
    word.resize(4, '0');
    return word;
}

int main() {
    std::string word;
    
    std::cin >> word;

    std::cout << MakeLengthFour(DeleteDuplicate(ReplaceCharToDigits(DeleteSymbols(word)))) << std::endl;

    return 0;
}