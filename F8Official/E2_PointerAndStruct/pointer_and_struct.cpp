#include <iostream>
#include <string>

using namespace std;

struct Student {
	string name;
	int age;

	Student() {

	}

	Student(string _name, int _age) {
		name = _name;
		age = _age;
	}
};

int main() {

//	Student student("Long",21); //Tao ra vung nho tren Stack
//	Student *student_ptr = &student;
//	cout << (*student_ptr).name << endl;
//	cout << student_ptr->name << endl;

	Student *student_ptr = new Student("Long",21); // Nhu nay goi la cap phat dong | tao ra vung nho tren Heap
	cout << (*student_ptr).name << endl;
	cout << student_ptr->name << endl;
	//Khi su dung xong vung nho tren Heap, thi phai delete con tro
	delete student_ptr;



	return 0 ;
}
