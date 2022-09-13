#ifndef USER_H
#define USER_H
#include "Meals.h"
#include "Sports.h"
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;


	class User {
		string name, surname;
		int ID;
		int yas, boy, kilo, kacinciHafta;
		double alinanToplamKalori, alinanToplamKalori2;
		double verilenToplamKalori, verilenToplamKalori2;
		friend ostream& operator << (ostream &os, User &oth);
		friend void alinan_kalori_hesapla(User &oth);
		friend void verilen_kalori_hesapla(User &oth);
		friend void kac_adet_ogun(User &oth);
		friend void Date(User &oth);
		friend void kac_adet_spor(User &oth);
		friend void bilgileri_al(User &oth);
		public:
			User();
			User(string, string, int , int, int, int,int );
			~User(){
				cout << "\n" << endl;
			}
			void set_kacinci_hafta(int no){
				kacinciHafta=no;
			}
			int get_kacinci_hafta(){
				return kacinciHafta;
			}
			void set_name(string name){
				this->name=name;
			}
			string get_name(){
				return name;
			}
			void set_surname(string surname){
				this->surname=surname;
			}
			string get_surname(){
				return surname;
			}
			void set_ID(int id){
				this->ID=id;
			}
			int get_ID(){
				return ID;
			}
			void set_kilo(int kilo){
				this->kilo=kilo;
			}
			int get_kilo(){
				return kilo;
			}
			void set_boy(int boy){
				this->boy=boy;
			}
			int get_boy(){
				return boy;
			}
			void set_yas(int yas){
				this->yas=yas;
			}
			int get_yas(){
				return yas;
			}
			User(User &oth);
			User& operator= (User &oth);
			User operator+(const User &oth );
			Breakfast kahvalti;
			Lunch ogleYemegi;
			Dinner aksamYemegi;
			Futbol futbol;
			Basketbol basketbol;
			Yuzme yuzme;
			Tenis tenis;
			
		};
		
		
#endif		





