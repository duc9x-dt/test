#include<iostream>

using namespace std;

void input_integer(int *n) {
	cin >> *n;
}

int main() {

//	int n = 4;
//	int *i_ptr = &n;
//	cout << &n << endl;
//	cout << i_ptr << endl;
//	cout << *i_ptr << endl;
//	*i_ptr = 6;
//	cout << n;

//	int numbers[4] = {1,2,3,4};
//	cout << &numbers[0] << endl;
//	cout << &numbers[1] << endl;
//	cout << &numbers[0] + 1 << endl;
//	int *i_ptr;
//	for(i_ptr = &numbers[0] ; i_ptr < &numbers[0] + 4 ; i_ptr++) {
//		cout <<*i_ptr << " ";
//	}

	int n = 4;
	input_integer(&n);
	cout << "n = " << n;





	return 0;
}

