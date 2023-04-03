#include<iostream>

int main() {


//	int x = 6;
//
//	switch(x) {
//		case 1 : {
//			std::cout << "x = 1" << std::endl;
//			break;
//		}
//		case 2 : {
//			std::cout << "x = 2" << std::endl;
//			break;
//		}
//		case 3 : {
//			std::cout << "x = 3" << std::endl;
//			break;
//		}
//		case 4 : {
//			std::cout << "x = 4" << std::endl;
//			break;
//		}
//		default : {
//			std::cout << "x = Unknow" << std::endl;
//			break;
//		}
//	}


//	int day = 6;
//
//	switch(day) {
//		case 0 : {
//			std::cout << "Hom nay la chu nhat";
//			break;
//		}
//		case 1 : {
//			std::cout << "Hom nay la thu hai";
//			break;
//		}
//		case 2 : {
//			std::cout << "Hom nay la thu ba";
//			break;
//		}
//		case 3 : {
//			std::cout << "Hom nay la thu tu";
//			break;
//		}
//		default : {
//			std::cout << "Unknow";
//			break;
//		}
//	}

	int month = 4;
	switch(month) {
		case 1 :
		case 3 :
		case 5 :
		case 7 :
		case 8 :
		case 10 :
		case 12 : {
			std::cout << "31 ngay.";
			break;
		}
		case 4 :
		case 6 :
		case 9 :
		case 11 : {
			std::cout << "30 ngay.";
			break;
		}
		case 2 : {
			std::cout << "28 ngay.";
			break;
		}
		default : {
			std::cout << "Khong biet.";
			break;
		}
	}





	return 0;
}
