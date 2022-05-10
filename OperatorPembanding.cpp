#include <iostream>
using namespace std;
int main(){
	cout << "=====Operator Pembanding=====\n";
	int a, b;
	cout << "Input nilai A = ";
	cin >> a;
	cout << "Input nilai B = ";
	cin >> b;
	bool hasil;
	bool t = true;
	bool f = false;
	std::cout << std::noboolalpha << t << " == " << std::boolalpha << t << std::endl;        
	std::cout << std::noboolalpha << f << " == " << std::boolalpha << f << std::endl;
	hasil = a > b;
	cout << "a > b = " << hasil <<
	endl;
	hasil = a < b;
	cout << "a < b = " << hasil <<
	endl;
	hasil = a >= b;
	cout << "a >= b = " << hasil <<
	endl;
	hasil = a <= b;
	cout << "a <= b = " << hasil <<
	endl;
	hasil = a == b;
	cout << "a == b = " << hasil <<
	endl;
	hasil = a != b;
	cout << "a != b = " << hasil <<
	endl;
	return 0;
}

