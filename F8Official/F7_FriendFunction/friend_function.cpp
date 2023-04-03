#include<iostream>
#include<string>

using namespace std;

// Friend Function

class Point {
	private:
		int x;
		int y;
	public:
		Point() {

		}
		Point (int x, int y) {
			this->x = x;
			this->y = y;
		}
		
		friend void print_point(Point point);
};

void print_point(Point point) {
	cout << point.x << " " << point.y<< endl;
}

int main() {
	
	print_point(Point(1,2));

	return 0 ;
}
