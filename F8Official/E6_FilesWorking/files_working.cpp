#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main() {

	fstream fs;
	fs.open("test.txt", ios::in); // Mo file o che do read-only neu file da ton tai
	fs.open("test.txt", ios::out); // Mo file o che do ghi va xoa het noi dung trong file, neu file khong ton tai thi se tao file
	fs.open("test.txt", ios::trunc); // Mo file o che do ghi va xoa het noi dung trong file, neu file khong ton tai thi se tao file
	fs.open("test.txt", ios::app); // Mo file o che do ghi, se chi ghi vao cuoi ma khong xoa cac du lieu cu
	fs.open("test.txt", ios::ate); // Mo file va di chuyen con tro xuong cuoi file
	fs.open("test.txt", ios::binary); // Lam viec voi file nhi phan

	return 0 ;


}
