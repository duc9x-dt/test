#include<iostream>
#include<string>

using namespace std;

int main() {


//	std::string str = "Hello World";
//	std::cout << str ;

//	string str = "Hello World";
//	cout << str ;

//	string str;
//	cout << "Nhap chuoi : ";
//	getline(cin, str);
//	cout << str ;

	string str;
	int n;
	cout << "n = ";
	cin >> n;
	cin.ignore();
	cout << "Nhap chuoi : ";
	getline(cin,str);
	cout << str ;

//	string str = "Hello World";
//	str[1] = 'E';
//	cout << str;


	return 0;
}
