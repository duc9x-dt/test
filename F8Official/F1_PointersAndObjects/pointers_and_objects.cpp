#include<iostream>
#include<string>

using namespace std;

class Cat {
	private:
		string name;
		int age;

	public:
		Cat() {
		}
		Cat(string _name, int _age) {
			this->name = _name;
			this->age = _age;
		}
		string get_name() {
			return this->name;
		}
		int get_age() {
			return this->age;
		}

};

int main() {

	//Cat cat("Bo",2);
	Cat *cat = new Cat("Meo Con", 2);

	cout << "Name : " << (*cat).get_name() << endl;
	cout << "Age : " << cat->get_age() << endl;

	return 0 ;


}
