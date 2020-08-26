#include <iostream>

/* int main(int argv, char** argc) {
	// Skip the first argc index because it's the program.
	for (int i = 1; i < argv; i++) {
		std::cout << argc[i];
		// Print a whitespace after all but the last iteration.
		if (i < argv - 1) {
			std::cout << " ";
		}
	}
	std::cout << std::endl;
}
// Compile with "g++ c-echo.cpp -o c-echo".
// Then run "./c-echo" followed by other inputs, which should be echoed. */

std::string echo(int length, char** chars) {
	std::string ret = "";
	for (int i = 1; i < length; i++) {
		ret += chars[i];
		if (i < length - 1) {
			ret += " ";
		}
	}
	ret += "\n";
	return ret;
}
