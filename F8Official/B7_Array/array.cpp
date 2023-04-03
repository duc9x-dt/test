#include<iostream>
#include<math.h>

int main() {

//	// <kieu_du_lieu> <ten_mang> [<so_luong_phan_tu>];
//	int numbers[5] = {1, 2, 3, 4, 5};
//	std::cout << numbers[2];

//	int numbers[5];
//	std::cin >> numbers[0];
//	std::cin >> numbers[1];
//	std::cin >> numbers[2];
//	std::cin >> numbers[3];
//	std::cin >> numbers[4];
//	std::cout << "numbers[0] = " << numbers[0] << std::endl;
//	std::cout << "numbers[1] = " << numbers[1] << std::endl;
//	std::cout << "numbers[2] = " << numbers[2] << std::endl;
//	std::cout << "numbers[3] = " << numbers[3] << std::endl;
//	std::cout << "numbers[4] = " << numbers[4] << std::endl;

	int numbers[5];
	for(int i = 0 ; i < 5 ; i++) {
		std::cout << "numbers[" << i << "] = ";
		std::cin >> numbers[i];
	}
	for(int i = 0 ; i < 5 ; i++) {
		std::cout << "numbers[" << i << "] = " << numbers[i] << std::endl;
	}






	return 0;
}
