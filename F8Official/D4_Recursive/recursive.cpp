#include<iostream>
#include<string>

using namespace std;

void print_values(int value) {
	cout << "Value = " << value << endl ;
	if(value == 1) {
		return;
	}
	print_values(value - 1);
}

int sum(int n) {
	if(n == 1) {
		return 1;
	}
	return n + sum(n-1);
}

int main() {

	print_values(10);

	cout << sum(100);

	return 0;

}
