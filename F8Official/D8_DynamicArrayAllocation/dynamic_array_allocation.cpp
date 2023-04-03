#include<iostream>

using namespace std;


int main() {

	int a[3]; // Mang tinh~ : Khong thay doi dc so phan tu cua mang sau khi khai bao

	int *b = new int[3]; // Khai bao mang dong. : Khai bao vung nho Heap
	for(int i = 0 ; i < 3 ; i++) {
		b[i] = 1;
	}
	cout << "Cac phan tu truoc khi them:" << endl;
	for(int i = 0 ; i < 3 ; i++) {
		cout << b[i] << " ";
	}
	cout << endl;

	// Tao mang dong moi co so luong phan tu la 4
	int *new_arr = new int[4];

	// Sao chep toan bo gia tri cu sang mang moi
	for(int i = 0 ; i < 3 ; i++) {
		new_arr[i] = b[i];
	}
	new_arr[3] = 2;

	delete[] b; // Xoa cac vung nho cu cua mang b

	//Gan vung nho moi cho con tro b
	b = new_arr;

	cout << "Cac phan tu sau khi them: " << endl;
	for(int i = 0 ; i < 4 ; i++) {
		cout << b[i] << " ";
	}





	return 0 ;
}
