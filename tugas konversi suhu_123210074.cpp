#include <iostream>
using namespace std;

int main ()
{
	int c,f,k,r;
	
	cout<< "Alat penkonversi suhu"<< endl;
	cout<< "Masukan suhu dalam satuan celsius = ";
	cin >> c;
	
	f = (9/5 * c) + 32;
	k = 273 + c;
	r = (4/9 * c) + 32;
	
	
	cout<< "\nHasil Konversi : "<<endl;
	
	cout<< " \nDalam satuan fahrenheit = "<< f;
	cout<< " \nDalam satuan kelvin = " << k;
	cout<< "\nDalam satuan reamur = " << r;
	
	return 0;
}
	
