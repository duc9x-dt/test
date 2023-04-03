#include <iostream>

int main() {

	int a = 1;

	float b = 1.4;

	double c = 3.14;

	char d = 'a';

	bool e = true;
	bool f = 1;


	std::cout << "Min int: " << INT_MIN << std::endl;
	std::cout << "Max int: " << INT_MAX << std::endl;
	std::cout << "Min short: " << SHRT_MIN << std::endl;
	std::cout << "Max short: " << SHRT_MAX << std::endl;

	// S? d?ng sizeof d? xác d?nh s? lu?ng byte mà m?t ki?u d? li?u có th? luu tr?

	std::cout << "Int: " << sizeof(int) << std::endl; // 4
	std::cout << "Float: " << sizeof(float) << std::endl; // 4
	std::cout << "Double: " << sizeof(double) << std::endl; // 8
	std::cout << "Bool: " << sizeof(bool) << std::endl; // 1
	std::cout << "Char: " << sizeof(char) << std::endl; // 1
	std::cout << "Long: " << sizeof(long) << std::endl; // 4

	return 0;
}
