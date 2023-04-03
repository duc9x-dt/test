#include<iostream>
#include<string>
#include<fstream>

using namespace std;


int main() {

	fstream fs;
	fs.open("E:\\Cpp\\F8Official\\E5_FileText\\Hello\\test.txt");
	if(!fs.is_open()) {
		return 1;
	}

	//Ghi file
	fs << "Hello World";

	//Doc file
	string str;
	getline(fs,str);
	cout << str;
	
	
	fs << "Bui Duc Long" << endl;
	fs << 1;

	string name;
	int a;
	getline(fs,name); //Doc den dau xuong dong
	fs >> a;
	cout << "Name : " << name << endl;
	cout << "a : " << a << endl;

	fs.close();

	return 0 ;
}
