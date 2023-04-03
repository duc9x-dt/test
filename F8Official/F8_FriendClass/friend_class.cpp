#include<iostream>
#include<string>

using namespace std;

// Friend Class

class B;

class A
{
	private:
		int x = 4;
		
		friend B;
};

class B
{
	public:
		void print_x(A a)
		{
			cout << a.x;
		}
};

int main() {
	
	B b;
	b.print_x(A());

	return 0 ;
}
