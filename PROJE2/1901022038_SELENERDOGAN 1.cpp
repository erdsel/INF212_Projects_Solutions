#include <iostream>
#include <string>
#include <fstream>
#include<cstring>
using namespace std;

class Ilac {
private:
	int ilac_id;
	int ilac_sayisi;
	double ilac_fiyati;
	string ilac_isim;
public:
	Ilac() {
		ilac_id = 0;
		ilac_sayisi = 0;
		ilac_fiyati = 0.0;
		ilac_isim = "None";
	}
	Ilac(int id, int sayi, double fiyat, string isim) {
		ilac_id = id;
		ilac_sayisi = sayi;
		ilac_fiyati = fiyat;
		ilac_isim = isim;
	}
	~Ilac() {
		cout << "Deconst worked." << endl;
	}
	Ilac(const Ilac& oth) {
		ilac_id = oth.ilac_id;
		ilac_sayisi = oth.ilac_sayisi;
		ilac_fiyati = oth.ilac_fiyati;
		ilac_isim = oth.ilac_isim;
	}
	Ilac& operator=(const Ilac& oth) {
		ilac_id = oth.ilac_id;
		ilac_sayisi = oth.ilac_sayisi;
		ilac_fiyati = oth.ilac_fiyati;
		ilac_isim = oth.ilac_isim;
		return *this;
	}
	void set_ilac_id(int id) {
		ilac_id = id;
	}
	int get_ilac_id() {
		return ilac_id;
	}
	void set_ilac_sayisi(int sayi) {
		ilac_sayisi = sayi;
	}
	int get_ilac_sayisi() {
		return ilac_id;
	}
	void set_ilac_fiyati(double fiyat) {
		ilac_fiyati = fiyat;
	}
	double get_ilac_fiyat() {
		return ilac_fiyati;
	}
	void set_ilac_ismi(string name) {
		ilac_isim = name;
	}
	string get_ilac_ismi() {
		return ilac_isim;
	}
	void ilac_olustur() {
		cout << "Ilac ismi giriniz." << endl;
		cin >> ilac_isim;
		cout << "Ilac id giriniz." << endl;
		cin >> ilac_id;
		cout << "Kac adet ilac oldugunu giriniz." << endl;
		cin >> ilac_sayisi;
		cout << "Ilacin ucretinin ne kadar oldugunu giriniz." << endl;
		cin >> ilac_fiyati;
	}
	void ilac_print() {
		cout << "Ilac ismi---> " << ilac_isim << endl << "Ilac id---> " << ilac_id << endl << "Ilac adedi---> " << ilac_sayisi << endl << "Ilac fiyati---> " << ilac_fiyati << endl;
	}
};
class EczaneBilgileri {

private:
	int eczane_id;
	string eczane_ismi;
	string eczane_adresi;

public:
	friend class Ilac;
	EczaneBilgileri() {
		eczane_id = 0;
		eczane_ismi = "None";
		eczane_adresi = "None";

	}
	EczaneBilgileri(int numara, string isim, string adres) {
		eczane_id = numara;
		eczane_ismi = isim;
		eczane_adresi = adres;
	}
	EczaneBilgileri(const EczaneBilgileri& other) {
		eczane_id = other.eczane_id;
		eczane_ismi = other.eczane_ismi;
		eczane_adresi = other.eczane_adresi;
	}
	EczaneBilgileri& operator = (const EczaneBilgileri& other) {
		this->eczane_adresi = other.eczane_adresi;
		this->eczane_id = other.eczane_id;
		this->eczane_ismi = other.eczane_ismi;
		return *this;
	}
	~EczaneBilgileri() {
		cout << "Deconst worked." << endl;
	}
	void setID(int numara) {
		eczane_id = numara;
	}
	void setIsim(string isim) {
		eczane_ismi = isim;
	}
	void setAdres(string adres) {
		eczane_adresi = adres;
	}
	int getID() {

		return eczane_id;
	}
	string getIsim() {
		return eczane_ismi;
	}
	string getAdres() {
		return eczane_adresi;
	}
	void eczane_olustur() {
		cout << "Eklemek istediginiz eczane ismini giriniz." << endl;
		cin >> eczane_ismi;
		cout << "Eklemek istediginiz eczane adresini giriniz." << endl;
		cin >> eczane_adresi;
		cout << "Eklemek istediginiz eczane numarasini giriniz." << endl;
		cin >> eczane_id;
	}
	void eczane_print() {
		cout << "Eczane ismi---> " << eczane_ismi << endl << "Eczane adresi---> " << eczane_adresi << endl << "Eczane id---> " << eczane_id << endl;
	}
	void eczaneDosyayaKaydet() {
		fstream f;

		f.open("EczaneListesi22.dat", ios::in | ios::out | ios::app | ios::binary);
		this->eczane_olustur();
		f.write((char*)this, sizeof(EczaneBilgileri));

		f.close();
	}
	void eczaneDosyadanOku() {
		fstream f;

		f.open("EczaneListesi22.dat", ios::in | ios::out | ios::app | ios::binary);

		cout << "................Dosyaya yazdirilmis olan eczane datasi..............." << endl;

		while (f.peek() != EOF) {
			f.read((char*)this, sizeof(EczaneBilgileri));
			this->eczane_print();
		}

		f.close();
	}
	void eczaneye_ilac_ekle(Ilac& obj) {
		cout << "Hangi numarali eczaneye ilac eklemek istediginizi giriniz." << endl;
		int no;
		cin >> no;
		fstream f;
		int count = 0;
		f.open("EczaneListesi22.dat", ios::in | ios::out | ios::app | ios::binary);
		while (f.peek() != EOF)
		{
			f.read((char*)this, sizeof(EczaneBilgileri));
			if (this->eczane_id == no)
			{
				cout << "Aradiginiz eczane bulunmustur." << endl;
				cout << "Girdiginiz eczane ismi---> " << this->eczane_ismi;
				f.close();
				count = 1;
			}

		}
		if (count == 0) {
			cout << "Aradiginiz eczane bulunamamistir." << endl;
		}
		else if (count == 1) {
			string xismi = "_ilac.dat";
			cout << "\nEklemek istediginiz ilacin bilgilerini giriniz." << endl;
			obj.ilac_olustur();
			string fullName = eczane_ismi + xismi;
			/*cout << "\n\nEczaneye ait olan ilac listesinin bulundugu dosya ismi.  " << endl;
			cout << fullName  <<endl;*/
			fstream f;

			f.open(fullName, ios::in | ios::out | ios::app | ios::binary);
			obj.ilac_print();
			f.write((char*)&obj, sizeof(Ilac));
			f.close();
		}


	}
	void eczaneden_ilac_duzenle(Ilac& obj) {
		cout << "Hangi eczaneye ait ilaci degistirmek istiyorsaniz eczane numarasini giriniz." << endl;
		cout << "Hangi numarali eczaneye ilac eklemek istediginizi giriniz." << endl;
		int no;
		cin >> no;
		fstream f;
		int count = 0;
		f.open("EczaneListesi22.dat", ios::in | ios::out | ios::app | ios::binary);
		while (f.peek() != EOF)
		{
			f.read((char*)this, sizeof(EczaneBilgileri));
			if (this->eczane_id == no)
			{
				cout << "Aradiginiz eczane bulunmustur." << endl;
				cout << "Girdiginiz eczane ismi---> " << this->eczane_ismi;
				f.close();
				count = 1;
			}
			else {
				cout << "Aradiginiz eczane bulunamamistir." << endl;
			}
		}
		if (count == 1) {
			cout << "Kayitli olan ilac listesi" << endl;
			obj.ilac_print();
			cout << "Bilgilerini degistirmek istediginiz ilacin numarasini giriniz." << endl;
			int no1;
			cin >> no1;
			if (obj.get_ilac_id() == no1) {
				cout << "Aradiginiz ilac bulunmustur." << endl << "Bilgileri yeniden duzenleyiniz" << endl;
				obj.ilac_olustur();
			}
		}
	}
	void isimden_eczane_bul() {
		int no;
		cout << "Goruntulemek istediginiz eczanenin numarasini giriniz." << endl;
		cin >> no;
		fstream f;
		//int count = 0;
		f.open("EczaneListesi22.dat", ios::in | ios::out | ios::app | ios::binary);
		while (f.peek() != EOF)
		{
			f.read((char*)this, sizeof(EczaneBilgileri));
			if (this->eczane_id == no)
			{
				cout << "Aradiginiz eczane bulunmustur." << endl;
				cout << "Girdiginiz eczane ismi---> " << this->eczane_ismi << endl;
				cout << "Girdiginiz eczane adresi--->" << this->eczane_adresi << endl;

				f.close();
				//count = 1;
			}

		}
		f.close();
	}
	friend void dosyayakaydet2(EczaneBilgileri& a) {
		fstream f;
		f.open("EczaneListesi22.dat", ios::in | ios::out | ios::app | ios::binary);
		//a.eczane_print();
		f.write((char*)&a, sizeof(EczaneBilgileri));
		f.close();
	}
	friend void eczaneilaclistele(EczaneBilgileri& a)
	{
		//EczaneBilgileri a;
		Ilac obj;
		cout << "\nIlaclarini gormek istediginiz eczanenin id numarasini giriniz.\n" << endl;
		int no;
		cin >> no;
		fstream f;
		int count = 0;
		f.open("EczaneListesi22.dat", ios::in | ios::out | ios::app | ios::binary);
		while (f.peek() != EOF)
		{
			f.read((char*)&a, sizeof(EczaneBilgileri));
			if (a.eczane_id == no)
			{
				cout << "Eczane ismi: " << a.eczane_ismi << "\nEczane adres: " << a.eczane_adresi << "\nEczane id: " << a.eczane_id << endl;
				cout << "Eczaneye ait ilac ismi: " << obj.get_ilac_ismi() << "\nEczaneye ait ilac id: " << obj.get_ilac_id() << "\nEczaneye ait ilac adedi: " << obj.get_ilac_sayisi() << "\nEczaneye ait ilac fiyati: " << obj.get_ilac_fiyat() << endl;
				f.close();
				count = 1;
			}

		}

	}

};
int main() {
	EczaneBilgileri x;
	int secim[10];
	cout << "ECZANE BILGI SISTEMI     " << endl;
	cout << "\n1-ECZANE GIRISI" << endl << "\n2-MUSTERI GIRISI" << endl;
	cout << "\nGiris yapmak istediginiz menunun numarasini seciniz." << endl;
	cin >> secim[0];
	while (secim[0] != 1 && secim[0] != 2) {
		cout << "\nYanlis yada eksik tuslama yaptiniz lutfen tekrardan giris yapiniz." << endl;
		cin >> secim[0];
	}
	if (secim[0] == 1) {
		cout << "\nEczane girisine devam etmek icin sifre girisi yapiniz. " << endl;
		cin >> secim[1];
		while (secim[1] != 4004) {
			cout << "\nYanlis yada eksik tuslama yaptiniz. Lutfen tekrar deneyiniz." << endl;
			cin >> secim[1];
		}
		if (secim[1] == 4004) {
			cout << "\nGirdiginiz sifre dogrudur." << endl << "Islemlere devam edebilirsiniz." << endl;
			cout << "1.1 Eczane Listesi Olustur\n\n1.2 Eczane Ekle\n\n1.3 Ilac Ekle\n\n1.4 Ilac Duzenle\n\n" << endl;
			cin >> secim[2];
			while (secim[2] != 1 && secim[2] != 2 && secim[2] != 3 && secim[2] != 4) {
				cout << "Yanlis yada eksik tuslama yaptiniz." << endl;
				cout << "Tekrar tuslama yapiniz." << endl;
				cin >> secim[2];
			}
			if (secim[2] == 1) {
				cout << "\nEczane listesi olustur bolumune hosgeldiniz." << endl << "Sizden istenilen bilgileri sirasiyla giriniz." << endl;
				EczaneBilgileri ecz;
				Ilac ilc;
				EczaneBilgileri a(1, "Selen Eczanesi", "Demet Sokak");
				EczaneBilgileri b(2, "Emre Eczanesi", "Safran Sokak");
				EczaneBilgileri c(3, "Niyazi Eczanesi", "Sir Sokak");
				EczaneBilgileri d(4, "Damla Eczanesi", "Cicek Sokak");
				dosyayakaydet2(a);
				dosyayakaydet2(b);
				dosyayakaydet2(c);
				dosyayakaydet2(d);
				ecz.eczaneDosyayaKaydet();
				ecz.eczaneDosyadanOku();
				ecz.eczaneye_ilac_ekle(ilc);
				cout << "\nBir adet eczane olusturdunuz ve o eczaneye ait bir adet ilac eklediniz." << endl;
			}
			else if (secim[2] == 2) {
				EczaneBilgileri a;
				a.eczaneDosyayaKaydet();
				a.eczaneDosyadanOku();
				cout << "SU ANA KADAR VE SIMDI EKLEDIGINIZ ECZANE LISTESI YUKARIDA LISTELENMEKTEDIR." << endl;
			}
			else if (secim[2] == 3) {
				cout << "Ilac ekleme bolumune hosgeldiniz." << endl;
				EczaneBilgileri a;
				Ilac ilc;
				a.eczaneDosyayaKaydet();
				a.eczaneye_ilac_ekle(ilc);
				cout << "Istediginiz eczaneye istediginiz ilac eklenmistir." << endl;
			}
			else if (secim[2] == 4) {
				cout << "Ilac duzenleme bolumune hosgeldiniz." << endl;
				EczaneBilgileri a;
				Ilac b;
				a.eczaneden_ilac_duzenle(b);
			}
		}


	}
	else if (secim[0] == 2) {
		cout << "Musteri girisine hosgeldiniz." << endl;
		cout << "2.1 Ilac Ara\n\n2.2 Eczane Listele\n\n2.3 Herhangi bir Eczaneyi Göster\n\n2.4 Herhangi bir Eczaneye ait Ilac Listesi\n\n" << endl;
		cin >> secim[5];
		if (secim[5] == 1) {
			cout << "Ilac arama bolumune hosgeldiniz." << endl;


		}
		else if (secim[5] == 2) {
			cout << "Eczane listeleme bolumune hosgeldiniz." << endl;
			x.eczaneDosyadanOku();

		}
		else if (secim[5] == 3) {
			cout << "Herhangi bir eczaneyi gosterme bolumune hosgeldiniz" << endl;
			EczaneBilgileri a;
			a.isimden_eczane_bul();
		}
		else if (secim[5] == 4) {
			cout << "Herhangi bir eczaneye ait ilac listesini gosterme bolumune hosgeldiniz." << endl;
			eczaneilaclistele(x);


		}
		while (secim[5] != 1 && secim[5] != 2 && secim[5] != 3 && secim[5] != 4) {
			cout << "Yanlis yada eksik tuslama yaptiniz." << endl;
			cout << "Tekrar tuslama yapiniz." << endl;
			cin >> secim[5];
		}
	}

	return 0;
}

