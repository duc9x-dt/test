#include<iostream>
#include<math.h>

int main() {

	int arr[20];
	int n, x;
	std::cout << "n = ";
	std::cin >> n;
	std::cout << "Nhap mang : ";
	for(int i = 0 ; i < n ; i++) {
		std::cin >> arr[i];
	}
	std::cout << "x = ";
	std::cin >> x;
	arr[n] = x;
	n++;
	std::cout << "Mang sau khi them x : ";
	for(int i = 0 ; i < n ; i++) {
		std::cout << arr[i] << " ";
	}

	return 0;
}
