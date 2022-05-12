#include <iostream>
using namespace std;

int main(){
	
    string pass,pwd,uname;
    
    cout << "======= Login =======\n" << endl;
    cout << "Masukkan Username : ";
    cin >> uname;
    
    cout << "Buat Password : ";
    cin >> pass;
    cout << "Masukkan Password : ";
    cin >> pwd;
    cout << "\n=====================" << endl;
    
    if (pass == pwd){
    	cout << "\nSelamat datang, " + uname + "!" << endl;
	} else{
		cout << "Password salah! Coba lagi..." << endl;
	}
	
	cout << "Terimakasih telah mencoba program ini!" << endl;
	
}
