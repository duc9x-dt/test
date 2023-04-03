#include<iostream>
#include<string>

using namespace std;

void function_a(int a, int b = 1)
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

int main() {
	
	function_a(4,3);
	
	function_a(4);
	
	return 0 ;
}
