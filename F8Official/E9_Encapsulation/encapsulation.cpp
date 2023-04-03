#include<iostream>
#include<string>

using namespace std;

/*
Tinh dong goi
*/


class Square {
	private:
		float side_length;

	public:
		void set_side_length(float _side_length) {
			side_length = _side_length;
		}
		float get_side_length() {
			return side_length;
		}
};

int main() {

	Square s1;
	s1.set_side_length(1.3);
	cout << "Side Length : " << s1.get_side_length() << endl;

	return 0 ;


}
