#include "User.h"
using namespace std;


	ostream& operator<< (ostream &os, User &oth){
		os << "Kullanici id- " << oth.get_ID() << endl ;
		os << "Kullanici isim soyisim- " << oth.get_name() << oth.get_surname() << endl;
		os << "Kullanici yas bilgisi- " << oth.get_yas() << endl;
		os << "Kullanici boy bilgisi- " << oth.get_boy() << endl << "Kullanici kilo bilgisi- " << oth.get_kilo()<< endl;
		return os;
	}
	User::User(){
		name="Null";
		surname="Null";
		ID=0;
		yas=0;
		boy=0;
		kilo=0;
		kacinciHafta=0;
		alinanToplamKalori=0.0;
		alinanToplamKalori2=0.0;
	    verilenToplamKalori=0.0;
	    
	}
	User::User(string isim, string soyisim, int numara, int yas, int kilo, int boy, int kacinciHafta){
		name=isim;
		surname=soyisim;
		ID=numara;
		this->yas= yas;
		this->kilo=kilo;
		this->boy=boy;
		this->kacinciHafta=kacinciHafta;
	}
	User& User::operator=(User &oth){
		cout << "User classina ait assignment operator calisti." << endl;
		name=oth.name;
		surname=oth.surname;
		ID=oth.ID;
		yas=oth.yas;
		kilo=oth.kilo;
		boy=oth.boy;
		kacinciHafta=oth.kacinciHafta;
		return *this;
	}
	User::User(User &oth){
		cout << "User classina ait copy constructor calisti." << endl;
		name=oth.name;
		surname=oth.surname;
		ID=oth.ID;
		yas=oth.yas;
		kilo=oth.kilo;
		boy=oth.boy;
		kacinciHafta=oth.kacinciHafta;
	}
	void alinan_kalori_hesapla(User& oth){
		oth.alinanToplamKalori =oth.kahvalti.kalori_hesapla();
		oth.alinanToplamKalori2+=oth.alinanToplamKalori;
		oth.alinanToplamKalori=oth.ogleYemegi.kalori_hesapla();
		oth.alinanToplamKalori2+=oth.alinanToplamKalori;
		oth.alinanToplamKalori=oth.aksamYemegi.kalori_hesapla();
		oth.alinanToplamKalori2+=oth.alinanToplamKalori;
		cout << "TOPLAM ALDIGINIZ KALORI MIKTARI--->>" <<oth.alinanToplamKalori2 << endl;
	}
	void verilen_kalori_hesapla(User &oth){
		int secim;
		//cout << "LUTFEN KALORI HARCAMASI ICIN GEREKLI SORULARI CEVAPLAYINIZ" << endl;
		cout << "Hangi sporu yaptiginizi seciniz." << endl;
		cout << "1-BASKETBOL" << endl << "2-FUTBOL" << endl << "3-TENIS" << endl << "4-YUZME" << endl;
		cin >> secim;
		while (secim != 1 && secim != 2 && secim != 3 && secim != 4){
			cout << "Yanlis yada eksik tuslama yaptiniz. Tekrar giriniz." << endl;
			cin >> secim;
		} 
		if (secim == 1){
			oth.verilenToplamKalori =oth.basketbol.kalori_hesapla();
			oth.verilenToplamKalori2 += oth.verilenToplamKalori;
		}
		else if (secim == 2){
			oth.verilenToplamKalori =oth.futbol.kalori_hesapla();
			oth.verilenToplamKalori2 += oth.verilenToplamKalori;
		}
		else if (secim == 3){
			oth.verilenToplamKalori =oth.tenis.kalori_hesapla();
			oth.verilenToplamKalori2 += oth.verilenToplamKalori;
		}
		else if (secim == 4){
			oth.verilenToplamKalori =oth.yuzme.kalori_hesapla();	
			oth.verilenToplamKalori2 += oth.verilenToplamKalori;
		}
		cout << "Harcadiginiz toplam kalori miktari: " << oth.verilenToplamKalori2 << endl;
	}
	void kac_adet_ogun(User &oth){
		oth.kahvalti.hangi_ogun_kac_defa();
		oth.ogleYemegi.hangi_ogun_kac_defa();
		oth.aksamYemegi.hangi_ogun_kac_defa();
	}
	void Date (User &oth){
		for (int i=1 ; i<8; i++){
			cout <<"\n\n\t\t\tHaftanin  " <<  i << ". gunu\n" << endl;
				alinan_kalori_hesapla(oth);
			cout << "\n" ;
		}
		cout << "\t\t\t\n\nBU HAFTA BOYUNCA ALDIGINIZ TOPLAM KALORI-------" <<"\t\t"<< oth.alinanToplamKalori2 << endl;
	
	        for (int i=1 ; i<8 ; i++){
	        	programbasi2:
	        	cout << "Haftanin " << i << ". gunu" << endl;
	        	verilen_kalori_hesapla(oth);	
	        	cout << "\n" << endl;
	        	cout << "Haftanin  " << i << ". gununde yeniden spor girisi yapmak icin 1'e basiniz." << endl << "Diger gune gecmek icin 2'ye basiniz." << endl;
	        	int secim;
	        	cin >> secim;
	        	while (secim != 1 && secim != 2){
	        		cout << "Yanlis yada eksik tuslama yaptiniz. Tekrar deneyiniz." << endl;
	        		cin >> secim;
				}
				if (secim == 1){
					goto programbasi2;
				}
				else if (secim == 2 ){
					cout << "\n" << endl;
				}
			}
			cout << "\n\n\n\t--------HAFTALIK KALORI HESABINIZ--------\n" << endl;
			cout << "\n\t Hafta boyunca aldiginiz kalori degeri-  " << oth.alinanToplamKalori2 << endl;
			cout << "\n\t Hafta boyunca harcadiginiz kalori degeri-  " << oth.verilenToplamKalori2 << endl;
			cout << "\n\t Aldiginiz kalori degeri - Verdiginiz kalori degeri" << endl;
			cout << "\t\t\t\t"<< oth.alinanToplamKalori2 - oth.verilenToplamKalori2 << endl;
			
			cout << "\n\n\n\t--------HAFTALIK OGUN OZETINIZ--------\n" << endl;
			kac_adet_ogun(oth);
				
			
			cout << "\n\n\n\t--------HAFTALIK SPOR OZETINIZ--------\n" << endl;
			kac_adet_spor(oth);
		
		
	}
	User User:: operator+(const User &oth ){
		cout << "User classina ait overload + operatorunu calistirildi." << endl;
		User temp;
		temp.boy=boy+ oth.boy;
		temp.ID=ID+ oth.ID;
		temp.kacinciHafta=kacinciHafta+ oth.kacinciHafta;
		temp.kilo=kilo+oth.kilo;
		temp.name=name+oth.name;
		temp.surname=surname+ oth.surname;
		temp.alinanToplamKalori=alinanToplamKalori+ oth.alinanToplamKalori;
		temp.verilenToplamKalori=verilenToplamKalori + oth.verilenToplamKalori;
		return temp;
	}
	void bilgileri_al(User &oth) {
			string name, surname;
			int kilo, boy, ID, yas, boyx, hafta;
			cout << "Kullanici id bilgisini giriniz." << endl;
			cin >> ID;
			oth.set_ID(ID);
			cout << "Kullanici ismi giriniz." << endl;
			cin.ignore();
			getline(cin, name);
			oth.set_name(name);
			cout << "Kullanici soyismi giriniz" << endl;
			getline(cin, surname);
			oth.set_surname(surname);
			cout << "Kullanici yasini giriniz." << endl;
			cin >> yas;
			oth.set_yas(yas);
			cout << "Kullanici boy bilgisini giriniz." << endl;
			cin >> boyx;
			oth.set_boy(boyx);
			cout << "Kullanici kilo bilgisini giriniz." << endl;
			cin >> kilo;
			oth.set_kilo(kilo);
			cout << "Hafta numarasini giriniz." << endl;
			cin >> hafta;
			while (hafta > 52){
			cout << "Fazla hafta sayisi girisi yaptiniz. Tekrar deneyiniz." << endl;
			cin >> hafta;
		}
		oth.set_kacinci_hafta(hafta);
	}
	void kac_adet_spor(User &oth){
		oth.basketbol.basketbol_goster();
		oth.futbol.futbol_goster();
		oth.tenis.tenis_goster();
		oth.yuzme.yuzme_goster();
	}

