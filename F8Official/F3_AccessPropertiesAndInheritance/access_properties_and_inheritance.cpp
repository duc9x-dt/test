#include<iostream>
#include<string>

using namespace std;

/*
Thuoc tinh truy cap va kieu ke thua
*/

class Animal {

	protected:
		float weight = 30;

	public:
		void run() {
			cout << "Animal is running..." << endl;
		}
};

class Pet {
	public:
		string name = "Meo";
};

class Cat : public Animal, protected Pet {
	public:
		void eat() {
			cout << "Cat is eating..." << endl;
		}
		void show_weight() {
			cout << "Weight : " << this->weight <<endl;
		}
};


int main() {

//	Animal animal;
//	animal.weight = 70;
	Cat cat;
	cat.show_weight();
//	cout << cat.name;




	return 0 ;


}
