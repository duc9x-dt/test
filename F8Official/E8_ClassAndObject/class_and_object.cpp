#include<iostream>
#include<string>

using namespace std;

class Person {

	public:
		// Properties
		string name;
		int age;

		// Constructor
		Person() {
			cout << "Ham khoi tao" << endl;
		}

		Person(string _name, int _age, string _address) {
			name = _name;
			age = _age;
			address = _address;
		}

		// Methods
		void work() {
			cout << name << " is working in " << address << endl;

		}
	private:
		string address = "Ha Noi";

};




int main() {

	Person person1("Nguyen Van A",28,"Ha Noi");
	//person1.name = "Nguyen Van A";
	//person1.age = 28;
	//person1.address = "Ha Noi";

	cout << "Name: " << person1.name << endl;
	cout << "Tuoi: " << person1.age << endl;
	//cout << "Dia Chi: " << person1.address << endl;

	person1.work();


	return 0 ;


}
