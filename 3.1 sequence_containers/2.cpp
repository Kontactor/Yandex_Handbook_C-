#include <algorithm>
#include <deque>
#include <iostream>
#include <string>
#include <vector>

int main () {
    int students_number = 0;
    std::cin >> students_number;
    std::deque<std::string> students_works;

    for(int i = 0; i < students_number; ++i) {
        std::string name, direction;
        std::cin >> name >> direction;

        if (direction == "top") {
            students_works.push_front(name);
        } 
        if (direction == "bottom") {
            students_works.push_back(name);
        }
    }

    int works_check_number = 0;
    std::cin >> works_check_number;

    std::vector<int> works_check(works_check_number);
    for (int& i : works_check) {
        std::cin >> i;
    }

    for(const int& i : works_check) {
        std::cout << students_works.at(i - 1) << std::endl;
    }

    return 0;
}