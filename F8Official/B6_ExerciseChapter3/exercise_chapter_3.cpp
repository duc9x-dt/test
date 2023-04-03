#include<iostream>
#include<math.h>

using namespace std;

int main() {

//	int a, b;
//	float x;
//reload:
//	std::cout << "a = ";
//	std::cin >> a;
//	std::cout << "b = ";
//	std::cin >> b;
//	if(a == 0 && b == 0) {
//		std::cout << "Phuong trinh co vo so nghiem";
//	} else if(a== 0 && b!= 0) {
//		std::cout << "Phuong trinh vo nghiem";
//	} else if(a != 0) {
//		x = (float)-b / a;
//		std::cout << "Nghiem x = " << x << std::endl;
//		goto reload;
//	}

	int n , s = 0;
	cout << "n = ";
	cin >> n;
	for(int i = 1 ; i <= n ; i++) {
		if(i % 2 == 1) {
			s = s += i;
		}
	}
	cout << "S = " << s;






	return 0;
}
