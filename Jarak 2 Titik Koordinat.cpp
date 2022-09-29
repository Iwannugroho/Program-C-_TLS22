/* Program Mencari Jarak Antara 2 Titik Koordinat
	Iwan Nugroho
	Teknik Elektro
	Faraday								*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int titikx1, titikx2, titiky1, titiky2;
	float jarak, hasilx, hasily;
	cout <<"~~~~~~~~~~ ";
	cout << "Program Mencari Jarak antara 2 Titik Koordinat";
	cout <<" ~~~~~~~~~~\n\n";
	
// Input 2 koordinat	
	cout << "Koordinat Pertama (X1,Y1) :"<< endl;
	cout << "=> masukkan X1 : " ;
	cin >> titikx1;
	cout << "\n";
	cout << "=> masukkan Y1 : " ;
	cin >> titiky1;
	cout << "\n";
	
	cout << "Koordinat Kedua (X2,Y2) :"<< endl;
	cout << "=> masukkan X2 : " ;
	cin >> titikx2;
	cout << "\n";
	cout << "=> masukkan Y2 : " ;
	cin >> titiky2;
	cout << "\n";
	
// Perhitungan untuk mencari jarak
// rumus : sqrt((x1-x2)^2 + (y2-y1)^2)
	hasilx =  titikx1 - titikx2;
	hasily = titiky1 - titiky2;
	jarak = (sqrt((hasilx*hasilx)+(hasily*hasily)));
	
// Hasil dan output dari jarak
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout << " Jarak antara titik " << "(" << titikx1 << ", " << titiky1 << ")" ;
	cout << " dengan titik " <<  "(" << titikx2 << ", " << titiky2 << ")" << " adalah : " << jarak;
	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	
	return 0;
}