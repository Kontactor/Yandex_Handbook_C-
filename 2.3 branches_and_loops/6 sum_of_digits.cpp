#include <iostream>

int main() {
	int n, sum = 0;

	std::cin >> n;

	while (n > 0) {
		sum += n % 10;
		n = n / 10;
	}

	std::cout << sum << std::endl;

	return 0;
}