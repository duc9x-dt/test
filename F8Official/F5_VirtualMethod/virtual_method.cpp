#include<iostream>
#include<string>

using namespace std;

// Phuong thuc ao

class Animal {
	public:
		virtual void move() {
			cout << "Animal move";
		}
};

class Dog : public Animal {
	public:
		void move() {
			cout << "Dog move";
		}
};

int main() {
	
	Animal *animal = new Dog;
	animal->move();

	return 0 ;
}
