#include<iostream>
#include<string>

using namespace std;

void input_integer(string label, int &n);
void input_array(int *arr, int size);
void print_array(int *arr, int size);
void push(int* &arr, int &size, int new_element);



int main() {

	int n, x;
	input_integer("n = ", n);
	int *numbers = new int[n];
	cout << "Nhap mang: ";
	input_array(numbers, n);
	input_integer("x = ", x);
	push(numbers, n, x);
	cout << "Mang sau khi them : " << endl;
	print_array(numbers,n);

	return 0 ;
}


void input_integer(string label, int &n) {
	cout << label;
	cin >> n;
}

void input_array(int *arr, int size) {
	for(int i = 0 ; i < size ; i++) {
		cin >> arr[i];
	}
}
void print_array(int *arr, int size) {
	for(int i = 0 ; i < size ; i++) {
		cout << arr[i] << " ";
	}
}

// Truyen tham chieu cho bien arr
void push(int* &arr, int &size, int new_element) {
	//Tao mot mang moi size + 1
	int new_size = size + 1;
	int *tmp_arr = new int[new_size];
	//Copy toan bo phan tu cu sang mang moi
	for(int i = 0 ; i < size ; i++) {
		tmp_arr[i] = arr[i];
	}
	//Them phan tu moi vao cuoi mang moi
	tmp_arr[new_size - 1] = new_element;
	//Gan mang moi sang cho con tro cu va tang size len 1 don vi
	delete[] arr;
	arr = tmp_arr;
	size = new_size;
}
















































