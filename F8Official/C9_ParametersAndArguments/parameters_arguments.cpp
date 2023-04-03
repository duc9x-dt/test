#include<iostream>
#include<string>

using namespace std;


int sum(int a, int b) {
	return a + b;
}

float avg(int arr[], int n) {
	int sum = 0;
	for(int i = 0 ; i < n ; i++) {
		sum += arr[i];
	}
	return (float) sum / n;
}

float avg2(int arr[][3], int n, int m) {
	int sum = 0;
	for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < m ; j++) {
			sum += arr[i][j];
		}
	}
	return (float) sum / (n*m);
}

int main() {

	int x = 4;
	int y = 5;
	cout << sum(x, y) << endl;

	int arr[10] = {1, 2, 3, 4};
	cout << avg(arr,4) << endl;

	int numbers[2][3] = {
		{1,2,3},
		{4,5,6}
	};
	cout << avg2(numbers,2,3) << endl;

	return 0 ;
}
