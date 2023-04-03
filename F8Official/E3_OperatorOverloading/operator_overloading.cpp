#include <iostream>
#include <string>

using namespace std;

// Nap chong toan tu la dinh nghia lai cac phep +-*/ voi kieu du lieu struct

struct Point {
	int x;
	int y;

	// Nap chong toan tu >>
	friend istream& operator>>(istream &is, Point &p) {
		cout << "x = ";
		is >> p.x;
		cout << "y = ";
		is >> p.y;
		return is;
	}

	// Nap chong toan tu <<
	friend ostream& operator<<(ostream &os, Point p) {
		os << p.x << " " << p.y;
		return os;
	}

	// Nap chong toan tu +
	friend Point operator+(Point p1, Point p2) {
		Point p3;
		p3.x = p1.x + p2.x;
		p3.y = p1.y + p2.y;
		return p3;
	}

	friend bool operator>(Point p1, Point p2) {
		if(p1.x > p2.x) {
			return true;
		} else {
			return false;
		}
	}


};

int main() {

	Point p1, p2;
	cout << "Nhap p1: " << endl;
	cin >> p1;
	cout << "Nhap p2: " << endl;
	cin >> p2;

	Point p3 = p1 + p2;
	cout << "p1 + p2 = " << p3 << endl;
	bool result = false;
	result = p1 > p2;
	if(result == true) {
		cout << "true" << endl;
	} else {
		cout << "false" <<endl;
	}



	return 0 ;


}
