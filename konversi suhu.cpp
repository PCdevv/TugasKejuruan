#include <iostream>
using namespace std;
int main(){
    float c,r,f;
	cout<<"          Program konversi     "<<endl;
	cout<<"               SUHU            "<<endl;
	cout<<"==============================="<<endl<<endl;
	cout<<endl;
	
	cout<<"Masukkan suhu dalam celcius: ";
	cin>>c;
	r=c*4.0/5.0;
	f=(c*9.0/5.0)+32;
	
	cout<<" - suhu dalam reamur ="<<r<<endl;
	cout<<" - suhu dalam fahrenheit="<<f<<endl<<endl;
	cout<<"=============================="<<endl;
	
	return 0;
	
}
