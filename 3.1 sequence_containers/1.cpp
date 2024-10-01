#include <iostream>
#include <string>
#include <vector>

template<typename T>
void Print(const T& container, const std::string& delimiter) {
    bool it_first = true;
    for( const auto& element : container) {
        if(!it_first) {
            std::cout << delimiter;
        }
        std::cout << element;
        it_first = false;
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> data = {1, 2, 3, 4};
    Print(data, ", ");  // 1, 2, 3, 4
    return 0;
}