#include <iostream>
#include <string>

using namespace std;


//Struct
struct Date {
	int date;
	int month;
	int year;

	Date() {

	}
	Date(int _date, int _month, int _year) {
		date = _date;
		month = _month;
		year = _year;
	}
};


struct Student {
	// properties
	string name;
	int age;
	Date dob;

	//constructor
	Student(string _name, int _age, Date _dob) {
		name = _name;
		age = _age;
		dob = _dob;
	}

	Student() {

	}

	// method
	void run() {
		cout << name << " is running" << endl;
	}

	void print() {
		cout << "Ten : " << name << ", tuoi : " << age << endl;
		cout << "Ngay sinh : " << dob.date << "/" << dob.month << "/" << dob.year << endl;
	}

};

int main() {

//  Student student_1 {"Long",18}; //Theo thu tu da dinh nghia

//  Student student_1 = Student {"Long", 18};

//	cout << "Nhap ten: ";
//	getline(cin,student_1.name);
//
//	cout << "Nhap ten: ";
//	cin >> student_1.age;

//	Student student_1("Long",18,Date(1,1,2000));
//
//	cout << "Ten : " << student_1.name << endl;
//	cout << "Tuoi : " << student_1.age << endl;
//	cout << "Tuoi : " << student_1.dob.year << endl;
//
//	student_1.run();

	Student students[3] = {
		Student("Long",18,Date(1,1,2000)),
		Student("Duy",19,Date(2,1,2000)),
		Student("Tuan",20,Date(3,1,2000)),
	};


	for(int i = 0 ; i < 3 ; i++) {
		students[i].print();

	}



	return 0 ;
}


















































