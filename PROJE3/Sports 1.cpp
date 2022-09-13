#include "Sports.h"

Basketbol::Basketbol(){
	kalori=0;
	dakika=0;
	harcananKalori=0;
	basketbol=0;
}
Basketbol::Basketbol(int a, int b, int c, int d){
	kalori=a;
	dakika=b;
	harcananKalori=c;
	basketbol=d;
}
Basketbol::Basketbol(Basketbol &oth){
	cout << "Basketbol classina ait copy const calisti." << endl;
	kalori= oth.kalori;
	dakika=oth.dakika;
	harcananKalori=oth.harcananKalori;
	basketbol=oth.basketbol;
}
Basketbol& Basketbol::operator=(Basketbol & oth){
	cout << "Basketbol classina ait assignment operator calisti." << endl;
	kalori= oth.kalori;
	dakika=oth.dakika;
	harcananKalori=oth.harcananKalori;
	basketbol=oth.basketbol;
	return *this;
}
Basketbol Basketbol::operator+(Basketbol &oth){
	cout << "Basketbol classina ait overload + operator fonksiyonu calisti." << endl;
	Basketbol temp;
	temp.harcananKalori= harcananKalori + oth.harcananKalori;
	return temp;
}
ostream& operator<<(ostream &os, Basketbol &oth){
	os << "Basketbol-> Dakika: " << oth.dakika << "Kalori: " << oth.kalori << "Harcanan Kalori: " << oth.harcananKalori << endl;
	return os; 
}
Futbol::Futbol(){
	kalori=0;
	dakika=0;
	harcananKalori=0;
	futbol=0;
}
Futbol::Futbol(int a, int b, int c, int d){
	kalori=a;
	dakika=b;
	harcananKalori=c;
	futbol=d;
}
Futbol::Futbol(Futbol &oth){
	cout << "Futbol classina ait copy constructor calisti." << endl;
	kalori= oth.kalori;
	dakika=oth.dakika;
	harcananKalori=oth.harcananKalori;
	futbol=oth.futbol;
}
Futbol& Futbol::operator=(Futbol & oth){
	cout << "Futbol classina ait assignment operator calisti." << endl;
	kalori= oth.kalori;
	dakika=oth.dakika;
	harcananKalori=oth.harcananKalori;
	futbol=oth.futbol;
	return *this;
}
Futbol Futbol::operator+(Futbol &oth){
	cout << "Futbol classina ait overload + operatoru calisti." << endl;
	Futbol temp;
	temp.harcananKalori= harcananKalori + oth.harcananKalori;
	return temp;
}
ostream& operator<<(ostream &os, Futbol &oth){
	os << "Futbol-> Dakika: " << oth.dakika << "Kalori: " << oth.kalori << "Harcanan Kalori: " << oth.harcananKalori << endl;
	return os; 
}
Tenis::Tenis(){
	kalori=0;
	dakika=0;
	harcananKalori=0;
	tenis=0;
}
Tenis::Tenis(int a, int b, int c, int d){
	kalori=a;
	dakika=b;
	harcananKalori=c;
	tenis=d;
}
Tenis::Tenis(Tenis &oth){
	cout << "Tenis classina ait copy constructor calisti." << endl;
	kalori= oth.kalori;
	dakika=oth.dakika;
	harcananKalori=oth.harcananKalori;
	tenis=oth.tenis;
}
Tenis& Tenis::operator=(Tenis & oth){
	cout << "Tenis classina ait assignment operator calisti." << endl;
	kalori= oth.kalori;
	dakika=oth.dakika;
	harcananKalori=oth.harcananKalori;
	tenis=oth.tenis;
	return *this;
}
Tenis Tenis::operator+(Tenis &oth){
	cout << "Tenis classina ait overload + operator fonksiyonu calisti." << endl;
Tenis temp;
	temp.harcananKalori= harcananKalori + oth.harcananKalori;
	return temp;
}
ostream& operator<<(ostream &os, Tenis &oth){
	os << "Tenis-> Dakika: " << oth.dakika << "Kalori: " << oth.kalori << "Harcanan Kalori: " << oth.harcananKalori << endl;
	return os; 
}
Yuzme::Yuzme(){
	kalori=0;
	dakika=0;
	harcananKalori=0;
	yuzme=0;
}
Yuzme::Yuzme(int a, int b, int c, int d){
	kalori=a;
	dakika=b;
	harcananKalori=c;
	yuzme=d;
}
Yuzme::Yuzme(Yuzme &oth){
	cout << "Yuzme classina ait copy constructor calisti." << endl;
	kalori= oth.kalori;
	dakika=oth.dakika;
	harcananKalori=oth.harcananKalori;
	yuzme=oth.yuzme;
}
Yuzme& Yuzme::operator=(Yuzme & oth){
	cout << "Yuzme classina ait assignment operator calisti." << endl;
	kalori= oth.kalori;
	dakika=oth.dakika;
	harcananKalori=oth.harcananKalori;
	yuzme=oth.yuzme;
	return *this;
}
Yuzme Yuzme::operator+(Yuzme &oth){
	cout << "Yuzme classina ait overload + operatoru calisti." << endl;
Yuzme temp;
	temp.harcananKalori= harcananKalori + oth.harcananKalori;
	return temp;
}
ostream& operator<<(ostream &os, Yuzme &oth){
	os << "Yuzme-> Dakika: " << oth.dakika << "Kalori: " << oth.kalori << "Harcanan Kalori: " << oth.harcananKalori << endl;
	return os; 
}
