/* Chuc lap trinh */
// nhập năm đổi sang tên của năm âm lịch
#include <iostream>
using namespace std;

int main() {
	int nam , x ;
	cin >> nam ;
	x = nam % 10  ;
	
	switch(x) { 
		case 4 : cout << "Giáp " ;
		break ;
		case 5 : cout << "Ất " ;
		break ;
		case 6 : cout << "Bính " ;
		break ;
		case 7 : cout << "Đinh " ;
		break ;
		case 8 : cout << "Mậu ";
		break ;
		case 9 : cout << "Kỷ " ;
		break ;
		case 0 : cout << "Canh " ;
		break ;
		case 1 : cout << "Tân " ;
		break ;
		case 2 : cout << "Nhâm " ;
		break ;
		case 3 : cout << "Quý " ;
		break ;
	}
	
	x = nam % 12 ;
	
	switch(x) { 
		case 4 : cout << "Tí" ;
		break ;
		case 5 : cout << "Sửu" ;
		break ;
		case 6 : cout << "Dần" ;
		break ;
		case 7 : cout << "Mão";
		break ;
		case 8 : cout << "Thìn" ;
		break ;
		case 9 : cout << "Tỵ" ;
		break ;
		case 10 : cout << "Ngọ" ;
		break ;
		case 11 : cout << "Mùi" ;
		break ;
		case 0 : cout << "Thân" ;
		break ;
		case 1 : cout << "Dậu" ;
		break ;
		case 2 : cout << "Tuất" ;
		break ;
		case 3 : cout << "Hợi" ;
		break ;
	}
}