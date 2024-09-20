#include <iostream>
#include <vector>

class MineSweeper {
public:
    MineSweeper () {
        height_ = 0;
        lenght_ = 0;
        mine_quantity_ = 0;
    }

    void Create () {
        std::cin >> height_ >> lenght_ >> mine_quantity_;
        CreateField();        
        for (int i = 1; i <= mine_quantity_; ++i) {
            int y_coordinate, x_coordinate;
            std::cin >> y_coordinate >> x_coordinate;
            FillField(y_coordinate - 1, x_coordinate - 1);
        }
    }

    void Print () {
        for (const auto& height : mine_field_){
            for (const int lenght : height) {
                if (lenght == -1) {
                    std::cout << '*' << ' ';
                } else {
                    std::cout << lenght << ' ';
                }
            }
            std::cout << '\n';
        }
    }

private:
    int height_, lenght_, mine_quantity_;
    std::vector<std::vector<int>> mine_field_;

    void FillField(const int y_coordinate, const int x_coordinate) {
        mine_field_[y_coordinate][x_coordinate] = -1;
        for (int i = y_coordinate - 1; i <= y_coordinate + 1; ++i){
            for (int j = x_coordinate - 1; j <= x_coordinate + 1; ++j) {
                if(i >= 0 && i < height_ && j >= 0 && j < lenght_ && mine_field_[i][j] != -1) {
                    ++mine_field_[i][j];
                }
            }
        }
    }

    void CreateField () {
        mine_field_.resize(height_);
        for(std::vector<int>& height : mine_field_){
            height.resize(lenght_);
        }
    }
};

int main () {
    MineSweeper minesweeper;
    minesweeper.Create();
    minesweeper.Print();

    return 0;
}