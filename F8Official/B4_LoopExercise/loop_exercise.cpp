#include<iostream>
#include<math.h>

int main() {

//	// S = 1 + 2 + 3 + ... + n
//	int n = 0;
//	std::cout << "Nhap n = ";
//	std::cin >> n;
//	int s = 0;
//	for(int i = 1 ; i <= n ; i++) {
//		s = s + i;
//	}
//	std::cout << "S = " << s;

//	// S = 1^2 + 2^2 + .. + n^2
//	int n = 0;
//	std::cout << "Nhap n = ";
//	std::cin >> n;
//	int i = 1, s = 0;
//	while(i <= n) {
//		// s = s + i* i;
//		s = s + pow(i,2); //#include<math.h>
//		i++;
//	}
//	std::cout << "S = " << s;

//	// n!
//	while(true) {
//		int n = 0;
//		std::cout << "n = ";
//		std::cin >> n;
//		unsigned long long s = 1;
//		for(int i = 1 ; i <= n ; i++) {
//			s *= i;
//		}
//		unsigned long long max = ULLONG_MAX;
//		std::cout << "byte of s = " << sizeof(s) << std::endl;
//		std::cout << "max of s = " << ULLONG_MAX << std::endl;
//		std::cout << "n! = " << s << std::endl;
//		std::cout << "GAP = " << ULLONG_MAX - s << std::endl;
//	}

    // in ra so tu 1 den n chia het cho 5
	int n = 0;
	std::cout << "n = ";
	std::cin >> n;
	for(int i = 5 ; i <= n ; i+=5) {
		if(i % 5 == 0) {
			std::cout << i << " ";
		}
	}














	return 0;
}
