#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	string nama, nim, plug;
	
	cout<<"MASUKAN : "<<endl;
	cout<<"Masukan Nama Anda = ";
	getline(cin,nama);
	
	cout<<"Masukan Nim  Anda = ";
	getline(cin,nim);
	
	cout<< "Masukan Plug Anda = ";
	getline(cin,plug);
	
	cout<<endl;
	cout<<"INILAH DATA ANDA : ";
	cout<<"\nNama Anda = "<<nama;
	cout<<"\nNim  Anda = "<<nim;
	cout<<"\nPlug Anda = "<<plug<<endl;
	
	cout<<"\n\nDalam Bentuk Tabel"<<endl;
	cout<< setw(58)<< setfill('=')<< '='<< endl;
	cout<< "NIM            l      Nama              l      Plug       "<<endl;
	cout<< setw(58)<< setfill('=')<< '=';
	cout<< setw(52)<< setfill(' ')<< ' ';
	cout<< endl; 
	
	cout<< setiosflags(ios::left)<< setw(15) << nim<< "l ";
	cout<< setiosflags(ios::left)<< setw(23) << nama<< "l ";
	cout<< setiosflags(ios::left)<< setw(14) << plug;
	

	
	return 0;
}	

