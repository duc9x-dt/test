#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {

    // Ghi du lieu vao file nhi phan *.bin hoac *.dat
	ofstream ofs;
	ofs.open("test.bin",ios::binary);
	if(!ofs.is_open())
	{
		cout << "Mo file that bai.";
		return 1;
	}
	int n = 7;
	ofs.write((char*)&n, sizeof(int));
	ofs.close();
	
	//Doc file nhi phan
	ifstream ifs;
	ifs.open("test.bin",ios::binary);
	int read_n;
	ifs.read((char*)&read_n, sizeof(int));
	cout << read_n;


	return 0 ;


}
