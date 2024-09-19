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
            int x, y;
            std::cin >> x >> y;
            FillField(x, y);
        }
    }

    void Print () {
        for (int i = 0; i < height_; ++i){
            for (int j = 0; j < lenght_; ++j) {
                if (mine_field_[i][j] == -1) {
                    std::cout << '*' << ' ';
                } else {
                    std::cout << mine_field_[i][j] << ' ';
                }
            }
            std::cout << '\n';
        }
    }

private:
    int height_, lenght_, mine_quantity_;
    std::vector<std::vector<int>> mine_field_;

    void FillField(const int x, const int y) {
        int x_c = x - 1;
        int y_c = y - 1;
        mine_field_[x_c][y_c] = -1;
        for (int i = x_c - 1; i <= x_c + 1; ++i){
            for (int j = y_c - 1; j <= y_c + 1; ++j) {
                if(i >= 0 && i < height_ && j >= 0 && j < lenght_ && mine_field_[i][j] != -1) {
                    ++mine_field_[i][j];
                }
            }
        }
    }

    void CreateField () {
        std::vector<std::vector<int>> mine_field(height_, std::vector<int>(lenght_, 0));
        mine_field_ = mine_field;
    }
};

int main () {
    MineSweeper minesweeper;
    minesweeper.Create();
    minesweeper.Print();

    return 0;
}