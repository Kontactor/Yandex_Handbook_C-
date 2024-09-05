#include <iostream>

int main() {
	int month, year;

	std::cin >> month >> year;

	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){ 
		std::cout << "31" << std::endl; 
	}
	else if (month == 2) {
		if (!(year % 400)) {
			std::cout << "29" << std::endl;
		}
		else if (!(year % 100)) {
			std::cout << "28" << std::endl;
		}
		else if (!(year % 4)) {
			std::cout << "29" << std::endl;
		}
		else {
			std::cout << "28" << std::endl;
		}
	}
	else {
		std::cout << "30" << std::endl;
	}
	return 0;
}