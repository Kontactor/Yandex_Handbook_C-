#include <iostream>

int main() {
	int year;

	std::cin >> year;

	if (!(year % 400)) {
		std::cout << "YES" << std::endl;
	}
	else if (!(year % 100)) {
		std::cout << "NO" << std::endl;
	}
	else if (!(year % 4)) {
		std::cout << "YES" << std::endl;
	}
	else {
		std::cout << "NO" << std::endl;
	}
	return 0;
}