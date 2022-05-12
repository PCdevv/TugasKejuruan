#include <iostream>
using namespace std;
int main(){
	cout << "=====Operator Logika=====\n";
	bool a, b;
	cout << "Input nilai A dalam boolean = ";
	cin >> a;
	std::cout << std::noboolalpha << a << " == " << std::boolalpha << a << std::endl;    
	cout << "Input nilai B dalam boolean = ";
	cin >> b;
	std::cout << std::noboolalpha << b << " == " << std::boolalpha << b << std::endl;    
	bool hasil;
	/*bool t = true;
	bool f = false;
	std::cout << std::noboolalpha << t << " == " << std::boolalpha << t << std::endl;        
	std::cout << std::noboolalpha << f << " == " << std::boolalpha << f << std::endl;
	hasil = a && b;*/
	cout << "Hasil AND a && b = " << hasil <<
	endl;
	hasil = a || b;
	cout << "Hasil OR a || b = " << hasil <<
	endl;
	hasil = !a;
	cout << "Hasil NOT !a = " << hasil <<
	endl;
	hasil = !b;
	cout << "Hasil NOT !b = " << hasil <<
	endl;
	return 0;
}

