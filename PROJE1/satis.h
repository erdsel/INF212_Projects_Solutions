#ifndef satis_h_
#define satis_h_


struct product {
	int ID;
	char name[50];
	int type ;
	double price;
	struct product *next;
	};
	
	struct product *bas1=NULL;
	struct product *gecici1=NULL;


	struct customer {
int ID;
char name[50];
int type;
double x_coord;
double y_coord;
struct customer *next; 
};

struct customer *bas=NULL;
struct customer *gecici=NULL;


struct satis {
int urunAdedi;
int musteriNumarasi;
char urunIsmi[15];
int kacKilo;
double ucret;
struct satis *next;
 };
 
 
 
struct satis *bas2=NULL;
struct satis *gecici2=NULL;



void sonaUrunEkle(int ID, char name[50], int type ,double price);
void urunYazdir();
void tipineGoreUrunYazdir();
void sonaMusteriEkle(int ID,char name[50],int type,double x_coord, double y_coord);
void musteriYazdir();
void tipineGoreMusteriYazdir();
void sonaSatisEkle(int urunAdedi, int musteriNumarasi, char urunIsmi[15], int kacKilo, double ucret);
void satisYazdir() ;
double kargoUcretiHesapla(double x_koor, double y_koor);

#endif
