#include <iostream>

int main() {
	int n;
	double ln = 1.0, sign = -1.0;

	std::cin >> n;

	for (int i = 2; i <= n; ++i) {
		ln += sign / i;
		sign *= -1.0;
	}

	std::cout << ln << std::endl;

	return 0;
}