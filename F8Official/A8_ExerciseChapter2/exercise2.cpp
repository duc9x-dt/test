#include <iostream>
#include<math.h>

// using namespace std;

int main() {

// //Bài 1: Nh?p vào 2 s? a và b. B?n hãy in ra màn hình t?ng và hi?u c?a 2 s? dó.
//	int a, b;
//	std::cout << "Nhap vao so a = ";
//	std::cin >> a;
//	std::cout << "Nhap vao so b = ";
//	std::cin >> b;
//	std::cout << "a + b = " << a+b << std::endl;
//	printf("a + b = %d\n", a+b);
//	std::cout << "a - b = " << a-b;


//	// Bài 2: Nh?p vào 1 ch? cái vi?t thu?ng b?t kì. Hãy in ra màn hình ch? cái dó du?i d?ng vi?t hoa.
//	char X;
//	std::cout << "Chu cai viet thuong : ";
//	std::cin >> X;
//	std::cout << (char) (X-32);


//	// Bài 3: Nh?p vào 2 s? nguyên a và b. Hãy hoán d?i giá tr? c?a 2 s? dó và in ra màn hình.
//	int a, b;
//	std::cout << "a = "; // 1
//	std::cin >> a;
//	std::cout << "b = "; // 2
//	std::cin >> b;
//
//	int c = a;
//	a = b;
//	b = c;
//
//	std::cout << "a = " << a << std::endl << "b = " << b;


	// Bài 4: Nh?p vào 2 s? nguyên duong a và b (a và b không trùng giá tr?). Hãy in ra màn hình s? nh? hon (không dùng c?u trúc if else ho?c toán t? 3 ngôi).
	int a, b;
	std::cout << "a = "; // 1
	std::cin >> a;
	std::cout << "b = "; // 2
	std::cin >> b;

    int tong = a + b;
    int hieu  = abs(a-b);
    
    std::cout << "Gia tri nho hon la : " << (tong - hieu) / 2;
    
    
    







































	return 0;
}
