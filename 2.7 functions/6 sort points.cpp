#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>

void SortPoints (std::vector<std::pair<int, int>>& coordinates) {    
    sort(coordinates.begin(), coordinates.end(), [](const std::pair<int, int>& lhs, const std::pair<int, int>& rhs) {
        return (lhs.first * lhs.first + lhs.second * lhs.second) < 
                (rhs.first * rhs.first + rhs.second * rhs.second);
    });
}

void PrintCoordinates(std::vector<std::pair<int, int>> points) {
    for(std::pair<int, int>& coordinate : points) {
        std::cout << coordinate.first << ' ' << coordinate.second << std::endl;
    }
}

int main () {
    int points_number = 0;
    std::cin >> points_number;
    std::vector<std::pair<int, int>> coordinates(points_number);
    
    for(std::pair<int, int>& coordinate : coordinates) {
        std::cin >> coordinate.first >> coordinate.second;
    }

    SortPoints(coordinates);
    PrintCoordinates(coordinates);

    return 0;
}