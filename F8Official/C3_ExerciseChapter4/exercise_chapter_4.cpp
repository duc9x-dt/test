#include<iostream>
#include<math.h>

int main() {

	int n = 0;
try_again:
	std::cout << "Nhap n = ";
	std::cin >> n;
	if(n < 2 || n > 10) {
		goto try_again;
	}
	int arr[n];
	std::cout << "Nhap mang : ";
	for(int i = 0 ; i < n ; i++) {
		std::cin >> arr[i];
	}

	for(int i = n - 1 ; i > 0 ; i--) {
		for(int j = 0 ; j < i ; j++) {
			if(arr[j] < arr[j+1]) {
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
	std::cout << "Mang sau khi sap xep : ";

	for(int i = 0 ; i < n ; i++) {
		std::cout << arr[i] << " ";
	}


	return 0;
}
