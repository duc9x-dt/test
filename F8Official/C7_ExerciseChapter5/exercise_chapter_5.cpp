#include<iostream>

using namespace std;

int main() {

	string str;
	cout << "Nhap chuoi : " << endl ;
	getline(cin, str);
	string str_result;

	int start_index = 0;
	int end_index = 0;

	for(int i = 0 ; i < str.length() ; i++) {
		if(str[i] != ' ') {
			start_index = i;
			break;
		}
	}
	for(int i = str.length() - 1 ; i >= 0 ; i--) {
		if(str[i] != ' ') {
			end_index = i;
			break;
		}
	}
	str_result = str.substr(start_index, end_index - start_index + 1);
	cout << str_result << endl;







	return 0 ;
}

