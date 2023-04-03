#include <iostream>
#include <string>

using namespace std;


struct Product {
	string name;
	int price;
	int quantity;

	friend istream& operator>>(istream &is, Product &product) {
		cout << "Nhap ten: ";
		is.ignore(); // Sau khi cin ma co getline thi phai goi ham nay truoc getline
		getline(is, product.name);
		cout << "Nhap price: ";
		is >> product.price;
		cout << "Nhap quantity: ";
		is >> product.quantity;
		return is;
	}

	friend ostream& operator<<(ostream &os, Product product) {
		os << "Ten: " << product.name << endl;
		os << "Don Gia: " << product.price << endl;
		os << "So Luong: " << product.quantity << endl;
		return os;
	}

};


int show_menu();
void print_product(Product *product, int size);
void add_product(Product* &products, int &size);
void delete_product(Product* &products, int &size);

int main() {

	int size = 0;
	Product *products = new Product[size];

	while(true) {
		int choose = show_menu();
		system("cls");
		switch(choose) {
			case 1 : {
				print_product(products, size);
				break;
			}
			case 2 : {
				add_product(products, size);
				break;
			}
			case 3 : {
				delete_product(products, size);
				break;
			}
			case 0 : {
				cout << "Bye bye!";
				return 0;
			}
			default : {
				break;
			}
		}

		cout << "Ban co muon tiep tuc khong? (1/0) : ";
		bool is_continue;
		cin >> is_continue; //cin o day anh huong den getline o tren friend istream& operator>>(istream &is, Product &product)

		if(!is_continue) {
			cout << "Bye bye!";
			break;
		}
	}
	return 0 ;
}

int show_menu() {

	system("cls");
	int choose;
	cout << "=====Menu=====" << endl;
	cout << "1. Xem danh sach san pham" << endl;
	cout << "2. Them san pham moi" << endl;
	cout << "3. Xoa san pham" << endl;
	cout << "0. Thoat chuong trinh" << endl;
	cout << "Lua chon cua ban la : ";
	cin >> choose;
	return choose;
}

void print_product(Product *products, int size) {
	if(size == 0) {
		cout << "Chua co san pham nao." << endl;
	} else {
		cout << "Danh sach san pham." << endl;
		for(int i = 0 ; i < size ; i++) {
			cout << products[i];
		}
	}
}

void add_product(Product* &products, int &size) {
	Product new_product;
	cout << "Nhap thong tin san pham moi : " << endl;
	cin >> new_product;

	int new_size = size + 1;

	Product *temp_products = new Product[new_size];

	for(int i = 0 ; i < size ; i++) {
		temp_products[i] = products[i];
	}
	temp_products[new_size - 1] = new_product;
	delete[] products;
	products = temp_products;
	size = new_size;
	cout << "Them san pham thanh cong!" << endl;

}

void delete_product(Product* &products, int &size) {
	string deleted_name;
	cin.ignore();
	cout << "Nhap ten san pham can xoa : ";
	getline(cin, deleted_name);
	int deleted_index = -1;
	for(int i = 0 ; i < size ; i++) {
		if(deleted_name.compare(products[i].name) == 0) { //gia tri tra ve = 0 la giong nhau
			deleted_index = i;
			break;
		}
	}
	if(deleted_index == -1) {
		cout << "Khong tim thay san pham can xoa!";
		return;
	} else {
		for(int i = deleted_index ; i < size - 1 ; i++) {
			products[i] = products[i+1];
		}
		size = size - 1;
		Product *temp_products = new Product[size];
		for(int i = 0 ; i < size ; i++) {
			temp_products[i] = products[i];
		}
		delete[] products;
		products = temp_products;
		cout << "Xoa san pham thanh cong!" << endl;
	}
}












































