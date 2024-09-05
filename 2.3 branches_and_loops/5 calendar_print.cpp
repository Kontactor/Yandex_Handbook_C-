#include <iostream>

int main() {
	int n, k;

	std::cin >> n >> k;

	for (int i = 1; i < n + k; ++i) {
			if ((i - (n - 1)) <= 0) {
				std::cout << "  ";
			}
			else if (i - (n - 1) < 10) {
				std::cout << " " << i - (n - 1);
			}
			else {
				std::cout << i - (n - 1);
			}
			
			if (!(i% 7)) {
				std::cout << std::endl;
			}
			else {
				std::cout << " ";
			}
	}
	return 0;
}