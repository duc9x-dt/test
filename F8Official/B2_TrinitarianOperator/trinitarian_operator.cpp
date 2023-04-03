#include<iostream>

int main()
{
//	int x = 100;
//	int y;
//	y = (x % 2 == 1) ? 1 : 0;
//	std::cout << y;
	
	
	int a, b;
	std::cout << "a = ";
	std::cin >> a;
	std::cout << "b = ";
	std::cin >> b;
	
	int result = a < b ? a : b;
	std::cout << "Gia Tri Nho Hon La : " << result; 
	
	
	return 0;
}
