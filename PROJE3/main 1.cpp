#include <iostream>
#include <conio.h>
#include "User.h"
using namespace std;


	int main () {
		int secim;
		cout << "\t\t\t   ------ KALORI HESAPLAMA PROGRAMINA HOSGELDINIZ. ------" << endl;
		cout << "\n\tLutfen devam etmek istediginiz modu tercih ediniz." << endl << "\t1-Developer mod" << endl << "\t2-User mod" << "\n\t3-Programdan cikmak icin 3'e basiniz." << endl;
		cin >> secim;
		User user;
	    while (secim != 1 && secim != 2 && secim !=3){
	    	cout << "Yanlis yada eksik tuslama yaptiniz tekrar giris yapiniz." << endl;
	    	cout << "1-Developer mod" << endl << "2-User mod" << endl;
	    	cin >> secim;
		}
		if (secim == 1){
			while(1==1){
			cout << "\n\n\t\t\t     ------------ DEVELOPER ------------" << endl;
			cout << "Meals fonksiyonlarini denemek icin 1'i\n" << "Sports fonksiyonlarini denemek icin 2'yi\n" << "User fonksiyonlarini denemek icin 3'u tuslayiniz." << "Programdan cikmak icin 4'u tuslayiniz."  << endl;
			int x;
			cin>>x;
			while(x != 1 && x!= 2 && x!=3 && x!=4){
				cout << "Yanlis yada eksik tuslama yaptiniz. Lutfen tekrar giris yapiniz." << endl;
				cout << "Meals classlarini denemek icin 1'i\n" << "Sports classlarini denemek icin 2'yi\n" << "User classlarini denemek icin 3'u tuslayiniz." << endl;
				cin >> x;
			}
			if(x == 1){
				cout << "\n\n\t\tMeals Fonksiyonlari\n\n" << endl;
				cout << "Meals sinifi icerisinde kullandigimiz class yapilarinin test edilmesi(Breakfast, Lunch, Dinner)" << endl;
				Breakfast test1;
				Lunch test2;
				Dinner test3;
				cout << test1;
				cout << test2;
				cout << test3;
				cout << "\n\n\t\tMeals class yapilarinin constructor ve overload << operator fonksiyonlari test edildi." << endl;
				cout << "Breakfast classinin fonksiyonlarini test etmek icin 1'e" << endl << "Lunch classinin fonksiyonlarini test etmek icin 2'ye " << endl << "Dinner classinin fonksiyonlarini test etmek icin 3'e basiniz." << endl;
				int y;
				cin >> y;
				while(y != 1 && y!= 2 && y!=3){
					cout << "Yanlis yada eksik tuslama yaptiniz. Tekrar deneyiniz." << endl;
					cin >> y;
				}
				if(y==1){
					cout << "\n\n\t\tBREAKFAST\n\n" << endl;
					cout << "\n\n\t\tAssignment, copy, overload + operator fonksiyonlari test ediliyor.." << endl;
					Breakfast test4(test1);
					cout << "\n\n\t\tKopyalanmis olan obje yazdiriliyor..." << endl;
					cout << test1;
					Breakfast test5;
					test5=test1;
					cout << "\n\n\t\tAssignment operatoru kullanilmis obje yazdiriliyor..." << endl;
					cout << test5;
					Breakfast temp;
					temp.operator+(test1);
					cout << temp;
					cout << "\n\n\t\tOverload + operatorunu kullanmis olan nesne yazdiriliyor..." << endl;
					cout << temp;
				}
				else if(y==2){
					cout << "\n\n\t\tLUNCH\n\n" << endl;
					cout << "\n\n\t\tAssignment, copy, overload + operator fonksiyonlari test ediliyor.." << endl;
					Lunch test6(test2);
					cout << "\n\n\t\tKopyalanmis olan obje yazdiriliyor..." << endl;
					cout << test6;
					Lunch test7;
					test7=test6;
					cout << "\n\n\t\tAssignment operatoru kullanilmis obje yazdiriliyor..." << endl;
				    cout <<test7;
				    Lunch temp_;
				    temp_.operator+(test7);
				    cout << "\n\n\t\tOverload + operatorunu kullanmis olan nesne yazdiriliyor..." << endl;
					cout << temp_;
					
				}
				else if(y==3){
					cout << "\n\n\t\tDINNER\n\n" << endl;
					cout << "\n\n\t\tAssignment, copy, overload + operator fonksiyonlari test ediliyor.." << endl;
					Dinner test8(test3);
					cout << "\n\n\t\tKopyalanmis olan obje yazdiriliyor..." << endl;
					cout <<test8;
					Dinner test9;
					test9=test8;
					cout << "\n\n\t\tAssignment operatoru kullanilmis obje yazdiriliyor..." << endl;
				    cout <<test9;
				    Dinner tempx;
				    tempx.operator+(test9);
				    cout << "\n\n\t\tOverload + operatorunu kullanmis olan nesne yazdiriliyor..." << endl;
					cout << tempx;
				    
					
					 
				}
				}
				else if (x == 2){
				cout << "\n\n\t\t\tSPORTS FONKSIYONLARI\n\n" << endl;
				cout << "Sports sinifi icerisinde kullandigimiz class yapilarinin test edilmesi(Basketbol,Futbol,Tenis,Yuzme)" << endl;
				Basketbol b;
				cout << b;
				Futbol f;
				cout << f;
				Tenis t;
				cout << t;
				Yuzme y;
				cout << y;
				cout << "\n\n\t\tSports class yapilarinin constructor ve overload << operator fonksiyonlari test edildi." << endl;
				cout << "\n\n\t\tTum sports class yapilarinin Assignment, copy, overload + operator fonksiyonlari test ediliyor.." << endl;
				Futbol test1(f);
				Basketbol test2(b);
				Yuzme test3(y);
				Tenis test4(t);
				cout << "\n" << endl;
				test1.operator+(f);
				test2.operator+(b);
				test3.operator+(y);
				test4.operator+(t);
				}
			else if(x == 3){
				cout << "\n\n\t\tUser Fonksiyonlari\n\n" << endl;
				User user_;
				cout << user_;
				User user1_(user_);
				cout << "Kopyalanmis olan obje yazdiriliyor..." << endl;
				cout << user1_;
				cout << "Parametreli constructor calistiriliyor..." << endl;
				User user3("Demet" , "Erdogan", 21, 32,162,75,4);
			    user3.operator+(user_);
			    cout <<"\n\nOverload + operatoru kullanilan nesne yazdiriliyor." << endl;
			    cout << user3;
				cout << "User classina ait bilgi alma fonksiyonunu deneyiniz." << endl;
				bilgileri_al(user1_);
				cout << "Overload << operatoru calistiriliyor." << endl;
				cout << user1_;
				cout << "\n\nUser classina ait kalori hesaplama fonksiyonu calisiyor...\n\n";
				alinan_kalori_hesapla(user1_);
				verilen_kalori_hesapla(user1_);
				cout << "\n\nUser classina ait haftalik ogun ve spor bilgilerini girip haftalik ozet fonksiyonlarini calistiriniz.\n\n ";
			    Date(user1_);
				//kac_adet_ogun(user1_);
				//kac_adet_spor(user1_);//bu fonksiyonlar date fonksiyonu icerisinde calismaktadir.
				}
			else if(x==4){
				cout << "Programdan cikisiniz yapiliyor..." << endl;
				exit(0);
			}
		}
	}
	else if (secim == 2){
			cout << "\n\n\t\t\t      ------------USER --------------" << endl;
			bilgileri_al(user);
			cout << "\n" << endl;
			cout << user;
		    cout << "\n\n\t\tYilin " << user.get_kacinci_hafta() << ".  haftasinin once ogun sonra spor girisini yapiniz." << endl;
		    Date(user);
			return 0;
	}
	else if(secim == 3){
		cout << "Programdan cikisiniz yapildi." << endl;
		exit(0);
	}
	return 0;
	}
