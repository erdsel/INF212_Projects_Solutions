#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "satis.h"


void sonaUrunEkle(int ID, char name[50], int type ,double price){
	struct product *eklenecek;
	eklenecek= (struct product*) malloc (sizeof(struct product));
		
		
	eklenecek->ID= ID;
	strcpy(eklenecek->name, name);
	eklenecek->type=type;
	eklenecek->price=price;
	eklenecek->next= NULL;
		
		if ( bas1== NULL){
			//demekki dugum yok
			bas1=eklenecek;
		}
		
		else {
			
			gecici1 = bas1;//dugumu kaybetmemek icin
			while (gecici1->next != NULL){
				
				gecici1= gecici1->next;
			}
			gecici1->next = eklenecek;
			
			
		}	
		
		
		
	}
	
	void urunYazdir() {
		
		gecici1=bas1; //bastaki dugumu kaybetmemek icin
		
		while(gecici1->next != NULL){
			
			printf("\n\nUrunun ID numarasi   ->   %d\n", gecici1->ID);
			printf("Urunun ad soyad bilgileri  ->   %s\n", gecici1->name);
			printf("Urunun fiyati  ->   %.2lf\n", gecici1->price);
			printf("Urunun tipi meyve ise 1, sebze ise 2, tavuk ise 3'u tuslayin.   ->   %d\n", gecici1->type);
			
			
			
			gecici1= gecici1->next;
		}
	
	
		printf("\n\nUrunun ID numarasi   ->   %d\n", gecici1->ID);
		printf("Urunun ad soyad bilgileri  ->   %s\n", gecici1->name);
		printf("Urunun fiyati    ->   %.2lf\n", gecici1->price);
		printf("Urunun tipi meyve ise 1, sebze ise 2, tavuk ise 3'u tuslayin.   ->   %d\n", gecici1->type);
			
	
}

	void tipineGoreUrunYazdir() {
		
		gecici1=bas1; //bastaki dugumu kaybetmemek icin
		
		while(gecici1->next != NULL){
			
			if(gecici1->type == 1)
			printf("%s meyve kategorisinde...\n", gecici1->name);
			else if (gecici1->type == 2)
			printf("%s sebze kategorisinde...\n", gecici1->name);
			else if (gecici1->type == 3)
			printf("%s et kategorisinde...\n", gecici1->name);
			
			
			
			gecici1= gecici1->next;
		}
	
	
		if(gecici1->type == 1)
			if(gecici1->type == 1)
			printf("%s meyve kategorisinde...\n", gecici1->name);
			else if (gecici1->type == 2)
			printf("%s sebze kategorisinde...\n", gecici1->name);
			else if (gecici1->type == 3)
			printf("%s et kategorisinde...\n", gecici1->name);
			
	
}



void sonaMusteriEkle(int ID,char name[50],int type,double x_coord, double y_coord){
		struct customer *eklenecek1;
		eklenecek1= (struct customer*) malloc (sizeof(struct customer));
		
		
		eklenecek1->ID= ID;
		strcpy(eklenecek1->name, name);
		eklenecek1->type=type;
		eklenecek1->x_coord=x_coord;
		eklenecek1->y_coord=y_coord;
		eklenecek1->next= NULL;
		
		if ( bas== NULL){
			//demekki dugum yok
			bas=eklenecek1;
		}
		
		else {
			
			gecici = bas;//dugumu kaybetmemek icin
			while (gecici->next != NULL){
				
				gecici= gecici->next;
			}
			gecici->next = eklenecek1;
			
			
		}	
		
		
		
	}
	
	void musteriYazdir() {
		
		gecici=bas; //bastaki dugumu kaybetmemek icin
		
		while(gecici->next != NULL){
			
			printf("\n\nMusterinin ID numarasi   ->   %d\n", gecici->ID);
			printf("Musterinin ad soyad bilgileri  ->   %s\n", gecici->name);
			if(gecici->type == 1){
				printf("Urunun tipi   ->   %d\n", gecici->type);
				printf("Musteri tipi ->    KURUMSAL\n");
			}
			else if (gecici->type == 0){
				printf("Musteri tipi ->    BIREYSEL\n");
			printf("Urunun tipi   ->   %d\n", gecici->type);
			}
			
			printf("Musteri x koordinat bilgisi -> %.2lf\n", gecici->x_coord);
			printf("Musteri y koordinat bilgisi -> %.2lf\n", gecici->y_coord);
			
			
			gecici= gecici->next;
		}
	
	
		printf("\n\nMusterinin ID numarasi   ->   %d\n", gecici->ID);
			printf("Musterinin ad soyad bilgileri  ->   %s\n", gecici->name);
			if(gecici->type == 1){
				printf("Musteri tipi   ->   %d\n", gecici->type);
				printf("Musteri tipi ->    KURUMSAL\n");
			}
			else if (gecici->type == 0){
				printf("Musteri tipi ->    BIREYSEL\n");
			printf("Musteri tipi   ->   %d\n", gecici->type);
			}
			
			printf("Musteri x koordinat bilgisi -> %.2lf\n", gecici->x_coord);
			printf("Musteri y koordinat bilgisi -> %.2lf\n", gecici->y_coord);
			
	
}

void tipineGoreMusteriYazdir() {
		
		gecici=bas; //bastaki dugumu kaybetmemek icin
		
		while(gecici->next != NULL){
			
			if(gecici->type == 1)
			printf("%s KURUMSAL kategorisinde...\n", gecici->name);
			else if (gecici->type == 0)
			printf("%s BIREYSEL kategorisinde...\n", gecici->name);
			
			gecici= gecici->next;
		}
	
			if(gecici->type == 1)
			printf("%s KURUMSAL kategorisinde...\n", gecici->name);
			else if (gecici->type == 0)
			printf("%s BIREYSEL kategorisinde...\n", gecici->name);
			
	
}



void sonaSatisEkle(int urunAdedi, int musteriNumarasi, char urunIsmi[15], int kacKilo, double ucret){
		struct satis *eklenecek2;
		eklenecek2= (struct satis*) malloc (sizeof(struct satis));
		
		
		eklenecek2->urunAdedi=urunAdedi;
		eklenecek2->musteriNumarasi=musteriNumarasi;
		strcpy(eklenecek2->urunIsmi,urunIsmi );
		eklenecek2->kacKilo=kacKilo;
		eklenecek2->ucret=ucret;
		eklenecek2->next= NULL;
		
		if ( bas2== NULL){
			//demekki dugum yok
			bas2=eklenecek2;
		}
		
		else {
			
			gecici2 = bas2;//dugumu kaybetmemek icin
			while (gecici2->next != NULL){
				
				gecici2 = gecici2->next;
			}
			gecici2->next = eklenecek2;
			
			
		}	
		
		
		
	}
	
void satisYazdir() {
		
		gecici2=bas2; //bastaki dugumu kaybetmemek icin
		
		while(gecici2->next != NULL){
			
			printf("\n\nUrun adedi:  %d\n", gecici2->urunAdedi);
			printf("Musteri numarasi:  %d\n", gecici2->musteriNumarasi);
		
			if (strcmp(gecici2->urunIsmi, "Armut")==0){
				printf("Bu urun sebze kategorisinde...\n");
				gecici2->ucret=gecici2->urunAdedi*(5.21)*gecici2->kacKilo;
				printf("Armuta odeyeceginiz toplam ucret:  %.2lf", gecici2->ucret);
			}
			else if (strcmp(gecici2->urunIsmi, "Ciger")==0){
				printf("Bu urun et kategorisinde...\n");
				gecici2->ucret=gecici2->urunAdedi*(48.21)*gecici2->kacKilo;
				printf("Kirmizi ete odeyeceginiz toplam ucret:  %.2lf\n", gecici2->ucret);
			}
			else if (strcmp(gecici2->urunIsmi, "Pirasa")==0){
				printf("Bu urun sebze kategorisinde...\n");
				gecici2->ucret=gecici2->urunAdedi*(3.21)*gecici2->kacKilo;
				printf("Pirasaya odeyeceginiz toplam ucret:  %.2lf", gecici2->ucret);
			}
			
			
			gecici2= gecici2->next;
		}
	
	
			printf("\n\nUrun adedi:  %d\n", gecici2->urunAdedi);
			printf("Musteri numarasi:  %d\n", gecici2->musteriNumarasi);
			//printf("Urun numarasi:  %d\n", gecici2->urunNumarasi);
			if (strcmp(gecici2->urunIsmi, "Armut")==0){
				printf("Bu urun meyve kategorisinde...\n");
				gecici2->ucret=gecici2->urunAdedi*(5.21)*gecici2->kacKilo;
				printf("Armuta odeyeceginiz toplam ucret:  %.2lf", gecici2->ucret);
			}
			else if (strcmp(gecici2->urunIsmi, "Ciger")==0){
				printf("Bu urun et kategorisinde...\n");
				gecici2->ucret=gecici2->urunAdedi*(48.21)*gecici2->kacKilo;
				printf("Kirmizi ete odeyeceginiz toplam ucret:  %.2lf\n", gecici2->ucret);
			}
			else if (strcmp(gecici2->urunIsmi, "Pirasa")==0){
				printf("Bu urun sebze kategorisinde...\n");
				gecici2->ucret=gecici2->urunAdedi*(3.21)*gecici2->kacKilo;
				printf("Pirasaya odeyeceginiz toplam ucret:  %.2lf", gecici2->ucret);
			}
}
double kargoUcretiHesapla(double x_koor, double y_koor){
	printf("Kargo ucreti hesaplaniyor...\n");
	double toplam, toplam2;
	toplam=sqrt((x_koor*x_koor)+(y_koor*y_koor));
	toplam2=toplam*0.35;

	return toplam2;
	
}


