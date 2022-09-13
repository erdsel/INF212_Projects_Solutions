#ifndef MEALS_H
#define MEALS_H
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
 	class Breakfast{
 		int small, medium, large;
 		int small_;
 		int medium_;
 		int large_;
 		friend ostream& operator << (ostream& os, const Breakfast &oth);
 		public:
 			Breakfast();
 			Breakfast(int, int, int);
 			~Breakfast(){
 				cout << "\n" << endl;
			 }
 			Breakfast(Breakfast & oth);
 			Breakfast& operator =(Breakfast &oth);
 			Breakfast operator+(Breakfast &oth);
 			void set_small(int);
 			int get_small();
 			void set_medium(int);
 			int get_medium();
 			void set_large(int);
 			int get_large();
 			void set_small_(int);
 			int get_small_();
 			void set_medium_(int);
 			int get_medium_();
 			void set_large_(int);
 			int get_large_();
 			double kalori_hesapla(){
 				int count;
 				string str= "Haftada toplam yediden fazla bu ogunden yapamazsiniz.";
 				double kalori=0;
 				programbasi:
 				cout << "Kahvalti ogunu icin hangi boyutta yemek tercih ettiginizi giriniz. " << endl;
 				cout << "1-Small\n2-Medium\n3-Large\n" << endl;
 				cin >> count;
 				while(count != 1 && count != 2 && count != 3 ) {
 					cout << "Yanlis yada eksik tuslama yaptiniz. Lutfen tekrar deneyiniz."<< endl;
 					cin >> count;
				 }
 				if(count ==1){
 					kalori=small;
 					small_++;
				 }
				 else if(count == 2){
				 	kalori =medium;
				 	medium_++;
				 }
				 else if(count == 3){
				 	kalori= large;
				 	large_++;
				 }
				 return kalori;
			 }
			 void hangi_ogun_kac_defa(){
			 	
			 	if(small_ != 0){
			 		cout << "\nKahvalti icin-> " << "Small boyutta " << small_ << "adet ogun tukettiniz." ;
				 }
				 if(medium_ != 0){
			 		cout << "\nKahvalti icin-> " << "Medium boyutta " << medium_ << "adet ogun tukettiniz." ;
				 }
				 if(large_ != 0){
			 		cout << "\nKahvalti icin-> " << "Large boyutta " << large_ << "adet ogun tukettiniz." ;
				 }
			 }
	 };
 	class Lunch{
 		int small, medium, large;
 			int small_;
 			int medium_;
 			int large_;
 		friend ostream& operator << (ostream& os, const Lunch &oth);
 		public:
 			Lunch();
 			Lunch(int, int, int);
 			~Lunch(){
 				cout << "\n" << endl;
			 }
 			Lunch(Lunch & oth);
 			Lunch& operator =(Lunch &oth);
 			Lunch operator+(Lunch &oth);
 			void set_small(int);
 			int get_small();
 			void set_medium(int);
 			int get_medium();
 			void set_large(int);
 			int get_large();
 			void set_small_(int);
 			int get_small_();
 			void set_medium_(int);
 			int get_medium_();
 			void set_large_(int);
 			int get_large_();
 			double kalori_hesapla(){
 				int count;
 				double kalori=0;
 				cout << "Ogle yemegi ogunu icin hangi boyutta yemek tercih ettiginizi giriniz. " << endl;
 				cout << "1-Small\n2-Medium\n3-Large\n" << endl;
 				cin >> count;
 				while(count != 1 && count != 2 && count != 3 ){
 					cout << "Yanlis yada eksik tuslama yaptiniz. Lutfen tekrar deneyiniz."<< endl;
 					cin >> count;
				 }
 				if(count ==1){
 					kalori=small;
 					cout << kalori << endl;
 					small_++;
				 }
				 else if(count == 2){
				 	
				 	kalori =medium;
				 	cout << kalori << endl;
				 	medium_++;
				 }
				 else if(count == 3){
				 	kalori= large;
				cout << kalori << endl; 	
				 	large_++;
				 }
				 return kalori;
			 }
			 void hangi_ogun_kac_defa(){
			 	
			 	if(small_ != 0){
			 		cout << "\nOgle yemegi icin-> " << "Small boyutta " << small_ << "adet ogun tukettiniz." ;
				 }
				 if(medium_ != 0){
			 		cout << "\nOgle yemegi icin-> " << "Medium boyutta " << medium_ << "adet ogun tukettiniz." ;
				 }
				 if(large_ != 0){
			 		cout << "\nOgle yemegi icin-> " << "Large boyutta " << large_ << "adet ogun tukettiniz." ;
				 }
			 }
	 };
	class Dinner{
 		friend ostream& operator << (ostream& os, const Dinner &oth);
 		int small, medium, large;
 		int small_;
 		int medium_;
 		int large_;
 		public:
 			Dinner();
 			Dinner(int, int, int);
 			~Dinner(){
 				cout << "\n" << endl;
			 }
 			Dinner(Dinner & oth);
 			Dinner& operator =(Dinner &oth);
 			Dinner operator+(Dinner &oth);
 			void set_small(int);
 			int get_small();
 			void set_medium(int);
 			int get_medium();
 			void set_large(int);
 			int get_large();
 			void set_small_(int);
 			int get_small_();
 			void set_medium_(int);
 			int get_medium_();
 			void set_large_(int);
 			int get_large_();
 			double kalori_hesapla(){
 				int count;
 				double kalori=0;
 				cout << "Aksam yemegi ogunu icin hangi boyutta yemek tercih ettiginizi giriniz. " << endl;
 				cout << "1-Small\n2-Medium\n3-Large\n" << endl;
 				cin >> count;
 				while(count != 1 && count != 2 && count != 3) {
 					cout << "Yanlis yada eksik tuslama yaptiniz. Lutfen tekrar deneyiniz."<< endl;
 					cin >> count;
				 }
 				if(count ==1){
 					kalori=small;
 					small_++;
				 }
				 else if(count == 2){
				 	kalori =medium;
				 	medium_++;
				 }
				 else if(count == 3){
				 	kalori= large;
				 	large_++;
				 }
				 return kalori;
			 }
			 
			 void hangi_ogun_kac_defa(){
			 	
			 	if(small_ != 0){
			 		cout << "\nAksam yemegi icin-> " << "Small boyutta " << small_ << "adet ogun tukettiniz." ;
				 }
				 if(medium_ != 0){
			 		cout << "\nAksam yemegi icin-> " << "Medium boyutta " << medium_ << "adet ogun tukettiniz." ;
				 }
				 if(large_ != 0){
			 		cout << "\nAksam yemegi icin-> " << "Large boyutta " << large_ << "adet ogun tukettiniz." ;
				 }
			 }
	 };
	 
	 
 	#endif
