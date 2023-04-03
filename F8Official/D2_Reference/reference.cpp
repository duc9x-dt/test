#include<iostream>
#include<string>

using namespace std;

// &x : Lay ra dia chi o nho cua x - tham chieu
void input_integer(string label, int &x) {
	cout << label;
	cin >> x;
}

void input_integer2(string label, const int &x) {
	cout << label;
	// cin >> x; : khong the thay doi (read only)
}

int main() {

	int n = 5;
	input_integer("Nhap n : ", n);

	cout << "Gia tri vua nhap : " << n;


	return 0;

}
