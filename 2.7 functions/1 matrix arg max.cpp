#include <iostream>
#include <utility>
#include <vector>

std::pair<size_t, size_t> MatrixArgMax(const std::vector<std::vector<int>>& matrix) {
    std::pair<size_t, size_t> matrix_arg_max{0, 0};
    int max = -2147483646;
    for (size_t i = 0; i != matrix.size(); ++i) {
        for (size_t j = 0; j != matrix[i].size(); ++j) {
            if (matrix[i][j] > max) {
                matrix_arg_max = {i, j};
                max = matrix[i][j];
            }
        }
    }
    return matrix_arg_max;
}

int main () {
    int x, y;
    std::cin >> x >> y;

    std::vector<std::vector<int>> matrix(x, std::vector<int> (y, 0));

    for (std::vector<int>& i : matrix) {
        for (int& j : i) {
            std::cin >> j;
        }
    }

    std::pair<size_t, size_t> matrix_arg_max = MatrixArgMax(matrix);
    std::cout << matrix_arg_max.first << ' ' << matrix_arg_max.second << std::endl;

    return 0;
}