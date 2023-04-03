#include<iostream>
#include<string>

using namespace std;

void input_integer(string label, int &n);
void input_array(int *arr, int size);
void print_array(int *arr, int size);
void remove(int* &arr, int &size, int deleted_index);

int main() {

	int n, x;
	input_integer("n = ", n);
	int *numbers = new int[n];
	cout << "Nhap mang: ";
	input_array(numbers, n);
	input_integer("x = ", x);
	remove(numbers, n, x);
	cout << "Mang sau khi xoa : " << endl;
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
void remove(int* &arr, int &size, int deleted_index) {
	
	for(int i = deleted_index ; i < size - 1 ; i++)
	{
		arr[i] = arr[i+1];
	}
	int new_size = size - 1;
	int *tmp_arr = new int[new_size];
	for(int i = 0 ; i < new_size ; i ++)
	{
		tmp_arr[i] = arr[i];
	}
	delete[] arr;
	arr = tmp_arr;
	size = new_size;

}















































