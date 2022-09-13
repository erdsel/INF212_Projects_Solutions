#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "satis.h"

int main () {
	
	
	int ID;
	char name[50];
	int type;
	double price;
	int musteriNumarasi;
	char musteriIsmi[50];
	int musteriTipi;
	double x_coord;
	double y_coord;
	
	
	int urunAdedi;
	char urunIsmi[15];
	int urunNumarasi;
	int kacKilo;
	double ucret;
	
	while(1==1){
		printf("...SATIS OTOMASYONU PROJESINE HOSGELDINIZ...\n\n");
	printf(" 1. Satis\n 2. Musteri Bilgisi\n 3. Urun Bilgisi\n 4. Musteri Analizleri\n 5. Urun Analizleri\n");
	int secim[30];
	scanf("%d", &secim[0]);
	switch (secim[0]){
		
		case 1:
			printf("...Satis Bolumu...\n\n\n");
			printf("Yapilmis satislar...\n");
			//sonaSatisEkle(1,1,"Armut", 4,0);
		//	sonaSatisEkle(2,2 , "Pirasa", 4,0);
			satisYazdir();
			printf("\nSatis islemi gerceklestirmek icin 1'e basiniz...\n");
			scanf("%d", &secim[7]);
			if(secim[7] == 1){
				printf("Kac tane urun almak istersiniz?");
				scanf("%d", &urunAdedi);
				int i;
				for(i=0; i<urunAdedi; i++){
					printf("Musteri numaranizi giriniz.");
					scanf("%d", &musteriNumarasi);
					printf("Isminizi giriniz.");
					scanf("%s", musteriIsmi);
					printf("Musteri tipini giriniz.");
					scanf("%d", &musteriTipi);
					printf("Urun ismi giriniz.");
					scanf("%s", urunIsmi);
					printf("Kac kilo almak istersiniz?");
					scanf("%d", &kacKilo);
					printf("X koordinat bilgilerini giriniz.");
					scanf("%lf", &x_coord);
					printf("Y koordinat bilgilerini giriniz.");
					scanf("%lf", &y_coord);
					sonaSatisEkle(urunAdedi, musteriNumarasi, urunIsmi, kacKilo, 0);
					
					
					sonaMusteriEkle(musteriNumarasi,musteriIsmi, type, x_coord, y_coord);
					printf("Kargo ucretiniz->    %.2lf", kargoUcretiHesapla( x_coord, y_coord));
					printf("\nAyni zamanda yeni musteri eklendi.");
				}
				musteriYazdir();
				printf("Su ana kadar yapilmis toplam satislar...\n\n");
				satisYazdir();
				
			}
			
			//satisYazdir();
			break;
			
			
			
		
		case 2:
		   printf("...Musteri Bilgisi Bolumu...\n\n\n");
		   
			printf("1- Tum musterileri listele.\n2- Musteri tipine gore listele.\n3- Bir musteri listele.");
		scanf("%d", &secim[3]);
	switch (secim[3]){
		
		case 1:
			sonaMusteriEkle(1,"Zeynep Ay",1,12.7, 6.23);
			sonaMusteriEkle(2,"Mehmet Altin",0,89.7, 14.23);
			sonaMusteriEkle(3,"Tuana Yucel",1,23.4, 45.73);
			musteriYazdir();
			printf("Baska musteri eklemek icin 1'e basiniz");
			scanf("%d", &secim[4]);
			if(secim[4] == 1){
				printf("Kac tane musteri eklemek istersiniz.");
					scanf("%d", &secim[4]);
					int i;
					for(i=0; i<secim[4]; i++){
						printf("Musteri no giriniz.");
	        			scanf("%d", &musteriNumarasi);
						printf("Musteri tipi giriniz.");
						scanf("%d", &musteriTipi);
						printf("Musteri ismi giriniz.");
						scanf("%s", musteriIsmi);
						printf("Musteri x koordinat bilgilerini giriniz.");
						scanf("%lf", &x_coord);
						printf("Musteri y koordinat bilgilerini giriniz.");
						scanf("%lf", &y_coord);
						sonaMusteriEkle(musteriNumarasi, musteriIsmi,musteriTipi, x_coord, y_coord );
						musteriYazdir();
						}
			}
			if( secim[4] != 1)
			printf("Program sonlaniyor...");
		
			break;
			
		case 2:
			printf("----Musteri tipine gore listeleme----\n\n");
			sonaMusteriEkle(1,"Zeynep Ay",1,12.7, 6.23);
			sonaMusteriEkle(2,"Mehmet Altin",0,89.7, 14.23);
			sonaMusteriEkle(3,"Tuana Yucel",1,23.4, 45.73);
			tipineGoreMusteriYazdir();
	
			break;
		
		case 3:
			printf("Bireysel turundeki musterileri goruntulemek icin 0'a...\nKurumsal turundeki musterileri goruntulemek icin 1'e basiniz...\n");
			scanf("%d", &secim[5]);
			if(secim[5] == 0){
				printf("Bireysel turdeki musteriler...\n");
				sonaMusteriEkle(1,"Zeynep Ay",1,12.7, 6.23);
				sonaMusteriEkle(3,"Tuana Yucel",1,23.4, 45.73);
				musteriYazdir();
			}
			else if (secim[5] == 1){
				printf("Kurumsal turdeki musterileri...\n");
				sonaMusteriEkle(2,"Mehmet Altin",0,89.7, 14.23);
				musteriYazdir();
			}
			else 
			printf("Yanlis yada eksik tuslama yaptiniz.");
		
			break;		
	
	}
			
			break;
			
			
			
			
		case 3:
		    printf("...Urun Bilgisi Bolumu...\n\n\n");
		
			printf("1- Tum urunleri listele.\n2- Urun tipine gore listele.\n3- Bir urun listele.");
		scanf("%d", &secim[1]);
		
		switch (secim[1]){
			
			case 1:
				sonaUrunEkle(1, "Armut", 1, 12.1);
				sonaUrunEkle(2, "Tavuk", 2, 48.5); 
				sonaUrunEkle(3, "Pirasa", 3, 4.54);
				urunYazdir();
				printf("Urun eklemek icin 1'e basiniz.");
				scanf("%d", &secim);
				if(secim[1] == 1){
					
					printf("Kac tane urun eklemek istersiniz.");
					scanf("%d", &secim[2]);
					int i;
					for(i=0; i<secim[2]; i++){
						printf("Urun no giriniz.");
	        			scanf("%d", &ID);
						printf("Urun isim giriniz.");
						scanf("%s", name);
						printf("Urun fiyat giriniz.");
						scanf("%lf", &price);
						printf("Urun tipi giriniz.");
						scanf("%d", &type);
						sonaUrunEkle( ID, name, type, price );
						
						
						urunYazdir();
						
					}
				
				
				
				
				
				
				
				
				break;
				
				
				
				
			case 2:
				printf("Urun tipine gore listele.\n");
				sonaUrunEkle(1, "Armut", 1, 12.1);
				sonaUrunEkle(2, "Tavuk", 3, 48.5); 
				sonaUrunEkle(3, "Pirasa", 2, 4.54);
				sonaUrunEkle(4, "Elma", 1, 8.54);
				tipineGoreUrunYazdir();
				break;
				
				
				
			case 3:
				printf("Bir adet urun listele.\n\n\n");
				printf("Meyve kategorisini goruntulemek icin 1'e...\n Et kategorisini goruntulemek icin 2'ye...\n Sebze kategorisini goruntulemek icin 3'e basiniz...\n");
				int urunTipi;
				scanf("%d", &urunTipi);
				if(urunTipi == 1){
				sonaUrunEkle(1, "Armut", 1, 12.1);
				sonaUrunEkle(4, "Elma", 1, 8.54);
				urunYazdir();
				}
				else if (urunTipi == 2){
					sonaUrunEkle(2, "Tavuk", 2, 48.5); 
					urunYazdir();
				}
				else if (urunTipi == 3){
					sonaUrunEkle(3, "Pirasa", 3, 4.54); 
					urunYazdir();
				}
				
				
				break;
			
			
				
		}
		}
		
		
		
			break;
			
			
			
		case 4:
			
			printf("...Musteri Analizleri Bolumu...\n\n\n");
		
		
			break;	
		
		
		case 5:
			
			printf("...Urun Analizleri Bolumu...\n\n\n");
			
			break;
		
		
		
		
	
		
	}
	
	
	
	
	
	return 0;
}
	}
