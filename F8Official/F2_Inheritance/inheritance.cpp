#include<iostream>
#include<string>

using namespace std;

/*
Tinh ke thua
*/

class Animal {
	public:
		float weight;
		void run() {
			cout << "Animal is running..." << endl;
		}
};

// class Cat ke thua class Animal
class Cat : public Animal {
	public:
		string name;
		void eat() {
			cout << "Cat is eating..." << endl;
		}
};


int main() {

	Cat cat;
	cat.weight = 30;
	cat.name = "Meo Meo";

	cout << "Name : " << cat.name << ", weight : " << cat.weight << endl;
	cat.eat();
	cat.run();

	return 0 ;


}
