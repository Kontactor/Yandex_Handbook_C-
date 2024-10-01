#include <iostream>
#include <vector>

std::vector<std::vector<int>> Transpose(const std::vector<std::vector<int>>& matrix) {
    std::vector<std::vector<int>> matrix_t(matrix.at(0).size(), std::vector<int>(matrix.size(), 0));
    for(size_t i = 0; i != matrix.size(); ++i) {
        for(size_t j = 0; j != matrix.at(0).size(); ++j) {
            matrix_t.at(j).at(i) = matrix.at(i).at(j);
        }
    }
    
    return matrix_t;
}

int main () {
    std::vector<std::vector<int>> matrix = {{1, 2}, {3, 4}, {5, 6}};
    for (std::vector<int>& row : matrix) {
        for(int i : row) {
            std::cout << i << ' ';
        }
        std::cout << std::endl;
    }
    std::vector<std::vector<int>> matrix_t = Transpose(matrix);
    for (std::vector<int>& row : matrix_t) {
        for(int i : row) {
            std::cout << i << ' ';
        }
        std::cout << std::endl;
    }

    return 0;    
}