#include <iostream>

int main(int argv, char** argc) {
	// Skip the first argc index because it's the program.
	for (int i = 1; i < argv; i++) {
		std::cout << argc[i] << " ";
	}
	std::cout << std::endl;
}
// Compile with "g++ c-echo.cpp -o c-echo".
// Then run "./c-echo" followed by other inputs, which should be echoed.
