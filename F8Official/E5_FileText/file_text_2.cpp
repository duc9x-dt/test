#include<iostream>
#include<string>
#include<fstream>

using namespace std;

struct Person {
	string name;
	int age;

	Person() {

	}

	Person(string _name, int _age) {
		name = _name;
		age = _age;
	}
};

int main() {

//	Person *persons = new Person[2];
//	persons[0] = Person("Long",24);
//	persons[1] = Person("Duc",18);
//
	fstream fs;
	fs.open("test2.txt");
	if(!fs.is_open()) {
		return 1;
	}
//	for (int i = 0 ; i < 2 ; i++) {
//		fs << persons[i].name << endl;
//		fs << persons[i].age << endl;
//	}
//
//	delete[] persons;
	
	Person *persons_read = new Person[2];
	for (int i = 0 ; i < 2 ; i++) {
		getline(fs, persons_read[i].name); //Read chuoi string den dau xuong dong
		fs >> persons_read[i].age; // Read so int
		fs.ignore();
	}

	for (int i = 0 ; i < 2 ; i++) {
		cout << "Name: " << persons_read[i].name << ", age: " << persons_read[i].age << endl;
	}
	
	delete[] persons_read;



	return 0 ;
}









































