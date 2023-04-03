#include<iostream>
#include<string>

using namespace std;

// Tinh da hinh

class Animal {
	public:
		void move() {
			cout << "Animal move" <<endl;
		}
};

class Dog : public Animal {
	public:
		void move() {
			cout << "Dog move" <<endl;
		}

		void parent_move() {
			Animal::move();
		}
};


int main() {

	Dog dog;
	dog.move();
	dog.parent_move();



	return 0 ;
}
