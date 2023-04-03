#include<iostream>
#include<string>

using namespace std;

int sum(int a, int b); // Khai bao ham nguyen mau, co the dinh nghia sau
void print_value(int value); // Khai bao ham nguyen mau, co the dinh nghia sau

int main() {

	print_value(sum(1,2));

	return 0;

}

int sum(int a, int b) {
	return a + b;
}

void print_value(int value) {
	cout << value << endl ;
}
