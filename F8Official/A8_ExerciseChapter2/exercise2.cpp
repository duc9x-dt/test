#include <iostream>
#include<math.h>

// using namespace std;

int main() {

// //B�i 1: Nh?p v�o 2 s? a v� b. B?n h�y in ra m�n h�nh t?ng v� hi?u c?a 2 s? d�.
//	int a, b;
//	std::cout << "Nhap vao so a = ";
//	std::cin >> a;
//	std::cout << "Nhap vao so b = ";
//	std::cin >> b;
//	std::cout << "a + b = " << a+b << std::endl;
//	printf("a + b = %d\n", a+b);
//	std::cout << "a - b = " << a-b;


//	// B�i 2: Nh?p v�o 1 ch? c�i vi?t thu?ng b?t k�. H�y in ra m�n h�nh ch? c�i d� du?i d?ng vi?t hoa.
//	char X;
//	std::cout << "Chu cai viet thuong : ";
//	std::cin >> X;
//	std::cout << (char) (X-32);


//	// B�i 3: Nh?p v�o 2 s? nguy�n a v� b. H�y ho�n d?i gi� tr? c?a 2 s? d� v� in ra m�n h�nh.
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


	// B�i 4: Nh?p v�o 2 s? nguy�n duong a v� b (a v� b kh�ng tr�ng gi� tr?). H�y in ra m�n h�nh s? nh? hon (kh�ng d�ng c?u tr�c if else ho?c to�n t? 3 ng�i).
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
