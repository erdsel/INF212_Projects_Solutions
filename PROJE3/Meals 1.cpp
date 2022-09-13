#include "Meals.h"

ostream& operator << (ostream &os, const Breakfast &oth){
	 	os <<"Kahvalti ogununun small boyutunun kalori degeri:  " << oth.small << endl;
	 	os <<"Kahvalti ogunun medium boyutunun kalori degeri:  " << oth.medium << endl;
	 	os <<"Kahvalti ogunun large boyutunun kalori degeri:  " << oth.large << endl; 
	 	os << "Kac adet small ogun yapildigi bilgisi:  " << oth.small_ << endl;
	 	os << "Kac adet medium ogun yapildigi bilgisi:  " << oth.medium_ << endl;
	 	os << "Kac adet large ogun yapildigi bilgisi:  " << oth.large_ << endl;
	 	os << "\n" << endl;
	 	return os;
	 }
ostream& operator << (ostream &os, const Lunch &oth){
	 	os <<"Ogle yemegi ogununun small boyutunun kalori degeri:  " << oth.small << endl;
	 	os <<"Ogle yemegi ogunun medium boyutunun kalori degeri:  " << oth.medium << endl;
	 	os <<"Ogle yemegi ogunun large boyutunun kalori degeri:  " << oth.large << endl; 
	 	os << "Kac adet small ogun yapildigi bilgisi:  " << oth.small_ << endl;
	 	os << "Kac adet medium ogun yapildigi bilgisi:  " << oth.medium_ << endl;
	 	os << "Kac adet large ogun yapildigi bilgisi:  " << oth.large_ << endl;
	 	os << "\n" << endl;
	 	return os;
	 }
ostream& operator << (ostream &os, const Dinner &oth){
	 	os <<"Aksam yemegi ogununun small boyutunun kalori degeri:  " << oth.small << endl;
	 	os <<"Aksam yemegi ogunun medium boyutunun kalori degeri:  " << oth.medium << endl;
	 	os <<"Aksam yemegi ogunun large boyutunun kalori degeri:  " << oth.large << endl; 
	 	os << "Kac adet small ogun yapildigi bilgisi:  " << oth.small_ << endl;
	 	os << "Kac adet medium ogun yapildigi bilgisi:  " << oth.medium_ << endl;
	 	os << "Kac adet large ogun yapildigi bilgisi:  " << oth.large_ << endl;
	 	os << "\n" << endl;
	 	return os;
	 }
Breakfast::Breakfast(){
	small=200;
	medium=400;
	large=600;
	small_=0;
 	medium_=0;
 	large_=0;
}
Breakfast::Breakfast(int a, int b, int c){
	small=a;
	medium =b;
	large=c;
}
Breakfast::Breakfast(Breakfast &oth){
	cout << "Copy constructor calisti." << endl;
	small=oth.small;
	medium=oth.medium;
	large=oth.large;
	small_=oth.small_;
	medium=oth.medium_;
	large=oth.large_;
}
Breakfast& Breakfast::operator=(Breakfast &oth){
	cout << "Assignment operator calisti." << endl;
	small=oth.small;
	medium=oth.medium;
	large=oth.large;
	small_=oth.small_;
	medium=oth.medium_;
	large=oth.large_;
	return *this;
}
Breakfast Breakfast::operator+(Breakfast &oth){
	cout << "Overload + operator fonksiyonu calisti." << endl;
	Breakfast temp;
	temp.small=small+oth.small;
	temp.medium=medium+oth.medium;
	temp.large=large+oth.large;
	temp.small_=small_+oth.small_;
	temp.medium_=medium_+oth.medium_;
	temp.large_=large_+oth.large_;
	return temp;
}
Lunch::Lunch(){
	small=400;
	medium=600;
	large=800;
	small_=0;
 	medium_=0;
 	large_=0;
}
Lunch::Lunch(int a, int b, int c){
	small=a;
	medium =b;
	large=c;
}
Lunch::Lunch(Lunch &oth){
		cout << "Copy constructor calisti." << endl;
	small=oth.small;
	medium=oth.medium;
	large=oth.large;
	small_=oth.small_;
	medium=oth.medium_;
	large=oth.large_;
}
Lunch& Lunch::operator=(Lunch &oth){
	cout << "Assignment operator calisti." << endl;
	small=oth.small;
	medium=oth.medium;
	large=oth.large;
	small_=oth.small_;
	medium=oth.medium_;
	large=oth.large_;
	return *this;
}
Lunch Lunch::operator+(Lunch &oth){
	cout << "Overload + operator fonksiyonu calisti." << endl;
	Lunch temp;
	temp.small=small+oth.small;
	temp.medium=medium+oth.medium;
	temp.large=large+oth.large;
	temp.small_=small_+oth.small_;
	temp.medium_=medium_+oth.medium_;
	temp.large_=large_+oth.large_;
	return temp;
}
Dinner::Dinner(){
	small=400;
	medium=600;
	large=800;
	small_=0;
	medium_=0;
	large_=0;
}
Dinner::Dinner(int a, int b, int c){
	small=a;
	medium =b;
	large=c;
}
Dinner::Dinner(Dinner &oth){
		cout << "Copy constructor calisti." << endl;
	small=oth.small;
	medium=oth.medium;
	large=oth.large;
	small_=oth.small_;
	medium=oth.medium_;
	large=oth.large_;
}
Dinner& Dinner::operator=(Dinner &oth){
	cout << "Assignment operator calisti." << endl;
	small=oth.small;
	medium=oth.medium;
	large=oth.large;
	small_=oth.small_;
	medium=oth.medium_;
	large=oth.large_;
	return *this;
}
Dinner Dinner::operator+(Dinner &oth){
	cout << "Overload + operator fonksiyonu calisti." << endl;
	Dinner temp;
	temp.small=small+oth.small;
	temp.medium=medium+oth.medium;
	temp.large=large+oth.large;
	temp.small_=small_+oth.small_;
	temp.medium_=medium_+oth.medium_;
	temp.large_=large_+oth.large_;
	return temp;
}
void Breakfast::set_small(int s){
	small=s;
}
int Breakfast::get_small(){
	return small;
}
void Breakfast::set_medium(int m){
	medium=m;
}
int Breakfast::get_medium(){
	return medium;
}
void Breakfast::set_large(int l){
	large=l;
}
int Breakfast::get_large(){
	return large;
}
void Breakfast::set_small_(int s){
	small_=s;
}
int Breakfast::get_small_(){
	return small_;
}
void Breakfast::set_medium_(int m){
	medium_=m;
}
int Breakfast::get_medium_(){
	return medium_;
}
void Breakfast::set_large_(int l){
	large_=l;
}
int Breakfast::get_large_(){
	return large_;
}
void Lunch::set_small(int s){
	small=s;
}
int Lunch::get_small(){
	return small;
}
void Lunch::set_medium(int m){
	medium=m;
}
int Lunch::get_medium(){
	return medium;
}
void Lunch::set_large(int l){
	large=l;
}
int Lunch::get_large(){
	return large;
}
void Lunch::set_small_(int s){
	small_=s;
}
int Lunch::get_small_(){
	return small_;
}
void Lunch::set_medium_(int m){
	medium_=m;
}
int Lunch::get_medium_(){
	return medium_;
}
void Lunch::set_large_(int l){
	large_=l;
}
int Lunch::get_large_(){
	return large_;
}
void Dinner::set_small(int s){
	small=s;
}
int Dinner::get_small(){
	return small;
}
void Dinner::set_medium(int m){
	medium=m;
}
int Dinner::get_medium(){
	return medium;
}
void Dinner::set_large(int l){
	large=l;
}
int Dinner::get_large(){
	return large;
}
void Dinner::set_small_(int s){
	small_=s;
}
int Dinner::get_small_(){
	return small_;
}
void Dinner::set_medium_(int m){
	medium_=m;
}
int Dinner::get_medium_(){
	return medium_;
}
void Dinner::set_large_(int l){
	large_=l;
}
int Dinner::get_large_(){
	return large_;
}
