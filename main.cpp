#include <iostream>
#include <conio.h>
using namespace std;

int main(){

	int umur,thn;
	char nama [30];
	cout <<"\nmasukan nama anda = ";
	cin>> nama;
	cout <<"masukan tahun lahir anda = ";
	cin>> thn;
	umur=2018-thn;
	cout<<"\numur " << nama <<" saat ini adalah = " << umur;

	if (umur >= 18 && umur <= 50)
	{
		cout <<"\nkamu sudah bisa daftar kuliah di pelita bangsa" << endl;
	}
	if (umur >= 1 && umur <= 17)
	{
		cout <<"\nkamu belum bisa daftar kuliah di pelita bangsa" << endl;
	}	
		
	cin.get();
	return 0;
	
}
