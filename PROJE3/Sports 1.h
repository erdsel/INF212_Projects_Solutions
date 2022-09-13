#ifndef SPORTS_H
#define SPORTS_H
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

	class Basketbol{
		int basketbol;
		int kalori;
 		int dakika;
 		int harcananKalori;
 	    friend ostream& operator<<(ostream &os, Basketbol &oth);
 		public:
 			Basketbol();
 			void set_harcanan_kalori(int x){
 				harcananKalori=x;
			 }
			 int get_harcanan_kalori(){
			 	return harcananKalori;
			 }
			 void set_dakika(int x){
			 	dakika=x;
			 }
			 int get_dakika(){
			 	return dakika;
			 }
 			void set_basketbol(int b){
 				basketbol=b;
			 }
			 int get_basketbol() {
			 	return basketbol;
			 }
 			double kalori_hesapla(){
 				cout << "Basketbol-> " << endl << "Kac dakika antreman yaptiniz?" << endl;
 				cin >> dakika;
 				kalori=6;
 				basketbol++;
 				harcananKalori=kalori*dakika;
 				return harcananKalori;
			 }
			 void basketbol_goster(){
			 	cout << "\nToplamda "  << basketbol << "adet basketbol antremani yaptiniz." << endl;
			 	
			 }
 			Basketbol(int , int, int, int);
 			~Basketbol(){
 				cout << "\n" << endl;
			 }
 			Basketbol(Basketbol &oth);
 			Basketbol& operator=(Basketbol &oth);
 			Basketbol operator+(Basketbol &oth);
	 };
	 class Futbol{
	 	int futbol;
	 	int kalori;
 		int dakika;
 		int harcananKalori;
	 	friend ostream& operator<<(ostream &os, Futbol &oth);
 		public:
 			double kalori_hesapla(){
 				cout << "Futbol-> " << endl << "Kac dakika antreman yaptiniz?" << endl;
 				cin >> dakika;
 				kalori=5;
 				harcananKalori=kalori*dakika;
 				futbol++;
 				return harcananKalori;
			 }
			 void futbol_goster(){
			 	cout << "\nToplamda "  << futbol << "adet futbol antremani yaptiniz." << endl;
			 }
			 
 			Futbol();
 			void set_harcanan_kalori(int x){
 				harcananKalori=x;
			 }
			 int get_harcanan_kalori(){
			 	return harcananKalori;
			 }
			 void set_dakika(int x){
			 	dakika=x;
			 }
			 int get_dakika(){
			 	return dakika;
			 }
 			void set_futbol(int f){
 				futbol=f;
			 }
			 int get_futbol(){
			 	return futbol;
			 }
 			Futbol(int , int, int, int);
 			~Futbol(){
 				cout << "\n" << endl;
			 }
 			Futbol(Futbol &oth);
 			Futbol& operator=(Futbol &oth);
 			Futbol operator+(Futbol &oth);
	 };
	 class Tenis{
	 	private:
	 		int tenis;//haftalik kac adet tensi antremani yaptýgýný gostermek icin
	 		int kalori;
 			int dakika;
 			int harcananKalori;
 		friend ostream& operator<<(ostream &os, Tenis &oth);
 			public:
 			double kalori_hesapla(){
 				cout << "Tenis-> " << endl << "Kac dakika antreman yaptiniz?" << endl;
 				cin >> dakika;
 				kalori=5;
 				tenis++;
 				harcananKalori=kalori*dakika;
 				return harcananKalori;
			 }
 			Tenis();
 			void tenis_goster(){//haftalik kac adet tensi antremani yaptýgýný gostermek icin
			 	cout << "\nToplamda "  << tenis << "adet tenis antremani yaptiniz." << endl;
			 }
 			void set_harcanan_kalori(int x){
 				harcananKalori=x;
			 }
			 int get_harcanan_kalori(){
			 	return harcananKalori;
			 }
			 void set_dakika(int x){
			 	dakika=x;
			 }
			 int get_dakika(){
			 	return dakika;
			 }
 			void set_tenis(int t){
 				tenis=t;
			 }
			 int get_tenis(){
			 	return tenis;
			 }
 			Tenis(int , int, int, int);
 			~Tenis(){
 				cout << "\n" << endl;
			 }
 			Tenis(Tenis &oth);
 			Tenis& operator=(Tenis &oth);
 			Tenis operator+(Tenis &oth);
	 };
	 class Yuzme{
	 	private:
	 		int yuzme;
	 		friend ostream& operator<<(ostream &os, Yuzme &oth);
	 		int kalori;
 			int dakika;
 			int harcananKalori;
 		public:
 			
 			Yuzme();
 			void set_harcanan_kalori(int x){
 				harcananKalori=x;
			 }
			 int get_harcanan_kalori(){
			 	return harcananKalori;
			 }
			 void set_dakika(int x){
			 	dakika=x;
			 }
			 int get_dakika(){
			 	return dakika;
			 }
			 
 			Yuzme(int , int, int, int);
 			double kalori_hesapla(){
 				cout << "Yuzme-> " << endl << "Kac dakika antreman yaptiniz?" << endl;
 				cin >> dakika;
 				kalori=7;
 				yuzme++;
 				harcananKalori=kalori*dakika;
 				return harcananKalori;
			 }
			 void set_yuzme(int y){
			 	yuzme=y;
			 }
			 int get_yuzme(){
			 	return yuzme;
			 }
 			~Yuzme(){
 				cout << "\n" << endl;
			 }
			 void yuzme_goster(){
			 	cout << "\nToplamda "  << yuzme << "adet yuzme antremani yaptiniz." << endl;
			 }
 			Yuzme(Yuzme &oth);
 			Yuzme& operator=(Yuzme &oth);
 			Yuzme operator+(Yuzme &oth);
 			
	 };
	 
	 
	 #endif
