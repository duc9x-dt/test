#include<iostream>

using namespace std;

//Stack, Heap

int main() {

//	int *a = new int(5); //Cap phat dong vung nho cho bien a
//	cout << *a;
//	delete a; // Giai phong vung nho sau khi su dung (quan trong)

	float *a = new float(5.6); // Cap phat dong vung nho X
	delete a; // Giai phong vung nho X

	a = new float(3.4); // Cap phat dong vung nho Y
	delete a; // Giai phong vung nho Y

	a = new float(1.2);


	return 0 ;
}
