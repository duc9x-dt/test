#include<iostream>

using namespace std;

int main() {

//  // str.substr(x,y); : lay chuoi con tu phan tu thu x va co y ki tu
//	string str = "01234";
//	string str1 = str.substr(2,3);
//	cout << str1 << endl; // 234
//	string str2 = str.substr(1);
//	cout << str2 <<endl; // 1234

//  // str.find(s); : Tim chuoi s trong chuoi str, ket qua tra ve la vi tri ki tu dau tien cua chuoi s trong chuoi str
//	string str = "abcd";
//	cout << str.find("cd") << endl; // ket qua la 2 | tim chuoi cd o vi tri thu bao nhieu trong chuoi abcd
//	string str1 = "e";
//	cout << str.find(str1) << endl; // neu khong tim thay se tra ve gia tri rac

//  // str.erase(x, n) : xoa chuoi str tu phan tu thu x, va xoa n ki tu
//	string str = "abcde";
//	str.erase(2,2);
//	cout << str << endl; // ket qua abe : xoa tu vi tri so 2, xoa 2 ki tu

//	string str = "abcdef";
//	str.replace(1,2,"***");
//	cout << str <<endl; // a***d : thay the tu vi tri so 1, thay 2 phan tu bang chuoi ***


//  // str1.compare(str2); : str1 = str2 thi tra ve 0, str1 < str2 thi tra ve -1, str1 > str2 thi tra ve 1
//	string str1 = "gbcd";
//	string str2 = "bh";
//	cout << str1.compare(str2) << endl;

//	string str = "abcd";
//	str.insert(1,"**");
//	cout << str << endl; // a**bcd

//	string str = "abcd";
//	int k = str.length(); // dem so byte cua chuoi
//	cout << k <<endl;

	string str = "abcd";
	int k = str.size(); // dem so byte cua chuoi
	cout << k <<endl;




	return 0;
}
