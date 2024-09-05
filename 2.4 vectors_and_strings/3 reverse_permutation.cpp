#include <iostream>
#include <vector>

int main() {
    int count = 0, tmp;
    
    std::cin >> count;

    std::vector<int> input_vector;
    std::vector<int> output_vector(count + 1, 0);
    input_vector.push_back(0);

    for (int i = 0; i < count; ++i) {
        std::cin >> tmp;
        input_vector.push_back(tmp);
    }


    for (size_t i = 1; i != input_vector.size(); ++i) {
        tmp = input_vector[i];
        output_vector[tmp] = i;
    }

    for (size_t i = 1; i != input_vector.size(); ++i) {
        std::cout << output_vector[i] << ' ';
    }
    std::cout << std::endl;

    return 0;
}