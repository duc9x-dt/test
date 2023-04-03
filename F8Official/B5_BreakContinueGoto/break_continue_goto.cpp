#include<iostream>
#include<math.h>

int main() {

//	for(int i = 1 ; i <= 10 ; i++) {
//		std::cout << i << std::endl;
//		if(i == 5) {
//			break;
//		}
//	}

//	int i = 1;
//	while(i <= 10) {
//		std::cout << i << std::endl;
//		if(i == 5) {
//			break;
//		}
//		i++;
//	}

//	for(int i = 1; i <= 10 ; i ++) {
//		if(i == 5) {
//			continue;
//		}
//		std::cout << i << std::endl;
//	}

//    int i = 1;
//	while(i <= 10) {
//		if(i == 5) {
//			i++;
//			continue;
//		}
//		std::cout << i << std::endl;
//		i++;
//	}

//	int n;
//try_again: // Label
//	std::cout << "n = ";
//	std::cin >> n;
//	if(n <= 0 || n % 2 == 0) {
//		goto try_again;
//	}
//	std::cout << "Gia tri cua n la : " << n;

	int n;
	while(true) {
		std::cout << "Nhap n = ";
		std::cin >> n;
		if(n > 0 && n % 2 ==1) {
			break;
		}
	}
	std::cout << "Gia tri cua n la : " << n;



	return 0;
}






















