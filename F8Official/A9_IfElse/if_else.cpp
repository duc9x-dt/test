#include<iostream>

int main() {

//	const int tuoi_cong_dan = 18;
//	int my_age = 18;
//
//	if(my_age >= tuoi_cong_dan) {
//		std::cout << "Du Tuoi Cong Dan";
//	} else {
//		std::cout << "Chua Du Tuoi";
//	}


//	if(false) {
//		std::cout << "Thuc Hien Lenh 1";
//	} else if (false) {
//		std::cout << "Thuc Hien Lenh 2";
//	} else {
//		std::cout << "Thuc Hien Lenh 3";
//	}


	int i = 51;

	if(i % 5 == 0) {
		std::cout << "i chia het cho 5";
	} else if (i % 2 == 0) {
		std::cout << "i chia het cho 2";
	} else {
		std::cout << "i khong chia het cho 2 va 5";
	}
	return 0;
}
