#include <iostream>

int main() {

//	// Toán t? quan h?
//    std::cout << (3 > 2) << std::endl; // 1 - true
//    std::cout << (1 > 2) << std::endl; // 0 - false
//
//    int a = 3;
//    int b = 3;
//    std::cout << (a == b) << std::endl; // 1 - true
//    std::cout << (a != b) << std::endl; // 0 - false
//
//    bool c = a < b;
//    std::cout << c << std::endl; // 0 - false
//
//    return 0;


//Toán t? logic
// AND
	std::cout << (true && true) << std::endl; // 1 - true
	std::cout << (true && false) << std::endl; // 0 - false
	std::cout << (false && true) << std::endl; // 0 - false
	std::cout << (false && false) << std::endl; // 0 - false

	// OR
	std::cout << (true || true) << std::endl; // 1 - true
	std::cout << (true || false) << std::endl; // 1 - true
	std::cout << (false || true) << std::endl; // 1 - true
	std::cout << (false || false) << std::endl; // 0 - false

	// NOT
	std::cout << !true << std::endl; // 0 - false
	std::cout << !false << std::endl; // 1 - true

	return 0;



}
