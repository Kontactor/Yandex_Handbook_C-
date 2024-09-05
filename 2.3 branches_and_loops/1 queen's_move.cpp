#include <iostream>
#include <cmath>

int main (){
    uint16_t start_column = 0, start_row = 0, end_column = 0, end_row = 0;
    std::cin >> start_column >> start_row >> end_column >> end_row;

    if ((start_column == end_column) || (start_row == end_row) || 
        (abs(start_column - end_column) == abs(start_row - end_row))){
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}