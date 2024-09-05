#include <iostream>
#include <string>
#include <cctype>
#include <vector>

int CalculateSumCategories(std::string pass) {
	std::vector<int> symbol_presence(4);
	int sum_cat = 0;

	for (int c : pass) {
		if (islower(c)) {
			symbol_presence[0] = 1;
		}
		if (isupper(c)) {
			symbol_presence[1] = 1;
		}
		if (isdigit(c)) {
			symbol_presence[2] = 1;
		}
		if (ispunct(c)) {
			symbol_presence[3] = 1;
		}
	}
	for (int i : symbol_presence) {
		sum_cat += i;
	}

	return sum_cat;
}

int main() {
	std::string pass;
	
	std::cin >> pass;
		
	if (pass.size() < 8 || pass.size() > 14 || CalculateSumCategories(pass) < 3) {
		std::cout << "NO" << std::endl;
	}
	else {
		std::cout << "YES" << std::endl;
	}

	return 0;
}