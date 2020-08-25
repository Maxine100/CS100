#include <iostream>

int main(int argv, char** argc) {
	// Skip the first argc index because it's the program.
	for (int i = 1; i < argv; i++) {
		std::cout << argc[i] << " ";
	}
	std::cout << std::endl;
}
